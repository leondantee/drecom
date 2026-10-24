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

// Function: entry_001cc580
// Address: 0x1cc580 - 0x1cc5f4
void entry_001cc580_0x1cc580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc580_0x1cc580");
#endif

    switch (ctx->pc) {
        case 0x1cc5d0u: goto label_1cc5d0;
        default: break;
    }

    ctx->pc = 0x1cc580u;

    // 0x1cc580: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cc580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc584: 0x904409e7  lbu         $a0, 0x9E7($v0)
    ctx->pc = 0x1cc584u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2535)));
    // 0x1cc588: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1CC588u;
    {
        const bool branch_taken_0x1cc588 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc588) {
            ctx->pc = 0x1CC600u;
            return;
        }
    }
    ctx->pc = 0x1CC590u;
    // 0x1cc590: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cc590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc594: 0x8c451b68  lw          $a1, 0x1B68($v0)
    ctx->pc = 0x1cc594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7016)));
    // 0x1cc598: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1CC598u;
    {
        const bool branch_taken_0x1cc598 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc598) {
            ctx->pc = 0x1CC5F4u;
            return;
        }
    }
    ctx->pc = 0x1CC5A0u;
    // 0x1cc5a0: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1cc5a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc5a4: 0xacc01b68  sw          $zero, 0x1B68($a2)
    ctx->pc = 0x1cc5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 7016), GPR_U32(ctx, 0));
    // 0x1cc5a8: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x1cc5a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1cc5ac: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1cc5acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc5b0: 0xad071b60  sw          $a3, 0x1B60($t0)
    ctx->pc = 0x1cc5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7008), GPR_U32(ctx, 7));
    // 0x1cc5b4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cc5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc5b8: 0xac4013e8  sw          $zero, 0x13E8($v0)
    ctx->pc = 0x1cc5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5096), GPR_U32(ctx, 0));
    // 0x1cc5bc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cc5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc5c0: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x1cc5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cc5c4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1cc5c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cc5c8: 0xc056f24  jal         func_15BC90
    ctx->pc = 0x1CC5C8u;
    SET_GPR_U32(ctx, 31, 0x1CC5D0u);
    ctx->pc = 0x15BC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BC90u, 0x1CC5C8u, 0x1CC5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC5D0u;
label_1cc5d0:
    // 0x1cc5d0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1cc5d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cc5d4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1CC5D4u;
    {
        const bool branch_taken_0x1cc5d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc5d4) {
            ctx->pc = 0x1CC600u;
            return;
        }
    }
    ctx->pc = 0x1CC5DCu;
    // 0x1cc5dc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cc5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc5e0: 0x8c4513ec  lw          $a1, 0x13EC($v0)
    ctx->pc = 0x1cc5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5100)));
    // 0x1cc5e4: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1cc5e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc5e8: 0xacc513e8  sw          $a1, 0x13E8($a2)
    ctx->pc = 0x1cc5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 5096), GPR_U32(ctx, 5));
    // 0x1cc5ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CC5ECu;
    {
        const bool branch_taken_0x1cc5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc5ec) {
            ctx->pc = 0x1CC600u;
            return;
        }
    }
    ctx->pc = 0x1CC5F4u;
}
