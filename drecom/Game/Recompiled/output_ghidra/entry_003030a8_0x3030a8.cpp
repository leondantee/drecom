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

// Function: entry_003030a8
// Address: 0x3030a8 - 0x303108
void entry_003030a8_0x3030a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003030a8_0x3030a8");
#endif

    switch (ctx->pc) {
        case 0x3030e4u: goto label_3030e4;
        default: break;
    }

    ctx->pc = 0x3030a8u;

    // 0x3030a8: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x3030a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x3030ac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3030acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3030b0: 0xac43136c  sw          $v1, 0x136C($v0)
    ctx->pc = 0x3030b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4972), GPR_U32(ctx, 3));
    // 0x3030b4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3030b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3030b8: 0x8c621338  lw          $v0, 0x1338($v1)
    ctx->pc = 0x3030b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x3030bc: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x3030bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x3030c0: 0xac621338  sw          $v0, 0x1338($v1)
    ctx->pc = 0x3030c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4920), GPR_U32(ctx, 2));
    // 0x3030c4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3030c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3030c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3030c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3030cc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3030ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3030d0: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x3030d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x3030d4: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x3030d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3030d8: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x3030d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x3030dc: 0xc05cc90  jal         func_173240
    ctx->pc = 0x3030DCu;
    SET_GPR_U32(ctx, 31, 0x3030E4u);
    ctx->pc = 0x173240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173240u, 0x3030DCu, 0x3030E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3030E4u;
label_3030e4:
    // 0x3030e4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x3030e4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3030e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3030e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3030ec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3030ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3030f0: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x3030f0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x3030f4: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x3030f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
    // 0x3030f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3030F8u;
    {
        const bool branch_taken_0x3030f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3030f8) {
            ctx->pc = 0x303108u;
            return;
        }
    }
    ctx->pc = 0x303100u;
    // 0x303100: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x303100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303104: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x303104u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x303108u;
}
