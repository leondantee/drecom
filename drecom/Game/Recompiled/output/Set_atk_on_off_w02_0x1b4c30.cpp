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

// Function: Set_atk_on_off_w02
// Address: 0x1b4c30 - 0x1b4cfc
void Set_atk_on_off_w02_0x1b4c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_atk_on_off_w02_0x1b4c30");
#endif

    switch (ctx->pc) {
        case 0x1b4c5cu: goto label_1b4c5c;
        default: break;
    }

    ctx->pc = 0x1b4c30u;

    // 0x1b4c30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b4c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b4c34: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1b4c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1b4c38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b4c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b4c3c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1b4c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x1b4c40: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1b4c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1b4c44: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x1b4c44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1b4c48: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b4c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4c4c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1b4c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4c50: 0xc44c1568  lwc1        $f12, 0x1568($v0)
    ctx->pc = 0x1b4c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b4c54: 0xc058c14  jal         func_163050
    ctx->pc = 0x1B4C54u;
    SET_GPR_U32(ctx, 31, 0x1B4C5Cu);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1B4C54u, 0x1B4C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4C5Cu;
label_1b4c5c:
    // 0x1b4c5c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B4C5Cu;
    {
        const bool branch_taken_0x1b4c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4c5c) {
            ctx->pc = 0x1B4C94u;
            goto label_1b4c94;
        }
    }
    ctx->pc = 0x1B4C64u;
    // 0x1b4c64: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b4c64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4c68: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1b4c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1b4c6c: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1b4c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1b4c70: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b4c70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1b4c74: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1b4c74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1b4c78: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1b4c78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1b4c7c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1b4c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4c80: 0xa060156d  sb          $zero, 0x156D($v1)
    ctx->pc = 0x1b4c80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b4c84: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1b4c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4c88: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1b4c88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b4c8c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1B4C8Cu;
    {
        const bool branch_taken_0x1b4c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4c8c) {
            ctx->pc = 0x1B4CE8u;
            goto label_1b4ce8;
        }
    }
    ctx->pc = 0x1B4C94u;
label_1b4c94:
    // 0x1b4c94: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1b4c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4c98: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1b4c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1b4c9c: 0x3c032800  lui         $v1, 0x2800
    ctx->pc = 0x1b4c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10240 << 16));
    // 0x1b4ca0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1b4ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1b4ca4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B4CA4u;
    {
        const bool branch_taken_0x1b4ca4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4ca4) {
            ctx->pc = 0x1B4CC8u;
            goto label_1b4cc8;
        }
    }
    ctx->pc = 0x1B4CACu;
    // 0x1b4cac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b4cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4cb0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1b4cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4cb4: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1b4cb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1b4cb8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1b4cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4cbc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1b4cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b4cc0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B4CC0u;
    {
        const bool branch_taken_0x1b4cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4cc0) {
            ctx->pc = 0x1B4CE8u;
            goto label_1b4ce8;
        }
    }
    ctx->pc = 0x1B4CC8u;
label_1b4cc8:
    // 0x1b4cc8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1b4cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b4ccc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1b4cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4cd0: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1b4cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1b4cd4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1b4cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4cd8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1b4cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b4cdc: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1b4cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1b4ce0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1b4ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4ce4: 0xa464127c  sh          $a0, 0x127C($v1)
    ctx->pc = 0x1b4ce4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 4));
label_1b4ce8:
    // 0x1b4ce8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1b4ce8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4cec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b4cecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4cf0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1b4cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b4cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4CFCu;
}
