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

// Function: entry_001b5c04
// Address: 0x1b5c04 - 0x1b5c78
void entry_001b5c04_0x1b5c04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5c04_0x1b5c04");
#endif

    switch (ctx->pc) {
        case 0x1b5c3cu: goto label_1b5c3c;
        case 0x1b5c74u: goto label_1b5c74;
        default: break;
    }

    ctx->pc = 0x1b5c04u;

    // 0x1b5c04: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b5c04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b5c08: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x1b5c08u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1b5c0c: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x1b5c0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x1b5c10: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b5c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b5c14: 0xac231a64  sw          $v1, 0x1A64($at)
    ctx->pc = 0x1b5c14u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
    // 0x1b5c18: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b5c18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5c1c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1b5c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1b5c20: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1b5c20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x1b5c24: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1b5c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b5c28: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1b5c28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1b5c2c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b5c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5c30: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b5c30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b5c34: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1B5C34u;
    SET_GPR_U32(ctx, 31, 0x1B5C3Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1B5C34u, 0x1B5C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5C3Cu;
label_1b5c3c:
    // 0x1b5c3c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b5c3cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b5c40: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b5c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5c44: 0x8c831b64  lw          $v1, 0x1B64($a0)
    ctx->pc = 0x1b5c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7012)));
    // 0x1b5c48: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1B5C48u;
    {
        const bool branch_taken_0x1b5c48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5c48) {
            ctx->pc = 0x1B5C78u;
            return;
        }
    }
    ctx->pc = 0x1B5C50u;
    // 0x1b5c50: 0x3c063f19  lui         $a2, 0x3F19
    ctx->pc = 0x1b5c50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16153 << 16));
    // 0x1b5c54: 0x34c3999a  ori         $v1, $a2, 0x999A
    ctx->pc = 0x1b5c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)39322);
    // 0x1b5c58: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1b5c58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b5c5c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b5c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5c60: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b5c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5c64: 0x24a40180  addiu       $a0, $a1, 0x180
    ctx->pc = 0x1b5c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 384));
    // 0x1b5c68: 0x24650180  addiu       $a1, $v1, 0x180
    ctx->pc = 0x1b5c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x1b5c6c: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1B5C6Cu;
    SET_GPR_U32(ctx, 31, 0x1B5C74u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1B5C74u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B5C74u) { return; }
    ctx->pc = 0x1B5C74u;
label_1b5c74:
    // 0x1b5c74: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b5c74u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1b5c78u;
}
