#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0026c434
// Address: 0x26c434 - 0x26c498
void entry_0026c434_0x26c434(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026c434_0x26c434");
#endif

    switch (ctx->pc) {
        case 0x26c478u: goto label_26c478;
        default: break;
    }

    ctx->pc = 0x26c434u;

    // 0x26c434: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x26c434u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x26c438: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x26c438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x26c43c: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x26c43cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x26c440: 0x10600163  beqz        $v1, . + 4 + (0x163 << 2)
    ctx->pc = 0x26C440u;
    {
        const bool branch_taken_0x26c440 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c440) {
            ctx->pc = 0x26C9D0u;
            return;
        }
    }
    ctx->pc = 0x26C448u;
    // 0x26c448: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x26c448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26c44c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c450: 0xac431b60  sw          $v1, 0x1B60($v0)
    ctx->pc = 0x26c450u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 3));
    // 0x26c454: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c458: 0xac401b68  sw          $zero, 0x1B68($v0)
    ctx->pc = 0x26c458u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7016), GPR_U32(ctx, 0));
    // 0x26c45c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c460: 0xac4013e8  sw          $zero, 0x13E8($v0)
    ctx->pc = 0x26c460u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5096), GPR_U32(ctx, 0));
    // 0x26c464: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c468: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x26c468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26c46c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x26c46cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26c470: 0xc056f24  jal         func_15BC90
    ctx->pc = 0x26C470u;
    SET_GPR_U32(ctx, 31, 0x26C478u);
    ctx->pc = 0x15BC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BC90u, 0x26C470u, 0x26C478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C478u;
label_26c478:
    // 0x26c478: 0x10400155  beqz        $v0, . + 4 + (0x155 << 2)
    ctx->pc = 0x26C478u;
    {
        const bool branch_taken_0x26c478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c478) {
            ctx->pc = 0x26C9D0u;
            return;
        }
    }
    ctx->pc = 0x26C480u;
    // 0x26c480: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c484: 0x8c6413ec  lw          $a0, 0x13EC($v1)
    ctx->pc = 0x26c484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5100)));
    // 0x26c488: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c48c: 0xac6413e8  sw          $a0, 0x13E8($v1)
    ctx->pc = 0x26c48cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5096), GPR_U32(ctx, 4));
    // 0x26c490: 0x1000014f  b           . + 4 + (0x14F << 2)
    ctx->pc = 0x26C490u;
    {
        const bool branch_taken_0x26c490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c490) {
            ctx->pc = 0x26C9D0u;
            return;
        }
    }
    ctx->pc = 0x26C498u;
}
