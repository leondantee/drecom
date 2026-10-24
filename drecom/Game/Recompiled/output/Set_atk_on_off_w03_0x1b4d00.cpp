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

// Function: Set_atk_on_off_w03
// Address: 0x1b4d00 - 0x1b4e38
void Set_atk_on_off_w03_0x1b4d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_atk_on_off_w03_0x1b4d00");
#endif

    switch (ctx->pc) {
        case 0x1b4d2cu: goto label_1b4d2c;
        default: break;
    }

    ctx->pc = 0x1b4d00u;

    // 0x1b4d00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b4d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b4d04: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1b4d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1b4d08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b4d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b4d0c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1b4d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x1b4d10: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1b4d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1b4d14: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x1b4d14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1b4d18: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b4d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4d1c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1b4d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4d20: 0xc44c1568  lwc1        $f12, 0x1568($v0)
    ctx->pc = 0x1b4d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b4d24: 0xc058c14  jal         func_163050
    ctx->pc = 0x1B4D24u;
    SET_GPR_U32(ctx, 31, 0x1B4D2Cu);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1B4D24u, 0x1B4D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4D2Cu;
label_1b4d2c:
    // 0x1b4d2c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B4D2Cu;
    {
        const bool branch_taken_0x1b4d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4d2c) {
            ctx->pc = 0x1B4D64u;
            goto label_1b4d64;
        }
    }
    ctx->pc = 0x1B4D34u;
    // 0x1b4d34: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b4d34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4d38: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1b4d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1b4d3c: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1b4d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1b4d40: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b4d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1b4d44: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1b4d44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1b4d48: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1b4d48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1b4d4c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1b4d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4d50: 0xa060156d  sb          $zero, 0x156D($v1)
    ctx->pc = 0x1b4d50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b4d54: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1b4d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4d58: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1b4d58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b4d5c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1B4D5Cu;
    {
        const bool branch_taken_0x1b4d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4d5c) {
            ctx->pc = 0x1B4E24u;
            goto label_1b4e24;
        }
    }
    ctx->pc = 0x1B4D64u;
label_1b4d64:
    // 0x1b4d64: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1b4d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4d68: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1b4d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1b4d6c: 0x3c032800  lui         $v1, 0x2800
    ctx->pc = 0x1b4d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10240 << 16));
    // 0x1b4d70: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1b4d70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1b4d74: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B4D74u;
    {
        const bool branch_taken_0x1b4d74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4d74) {
            ctx->pc = 0x1B4D98u;
            goto label_1b4d98;
        }
    }
    ctx->pc = 0x1B4D7Cu;
    // 0x1b4d7c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b4d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4d80: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1b4d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4d84: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1b4d84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1b4d88: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1b4d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4d8c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1b4d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b4d90: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1B4D90u;
    {
        const bool branch_taken_0x1b4d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4d90) {
            ctx->pc = 0x1B4E24u;
            goto label_1b4e24;
        }
    }
    ctx->pc = 0x1B4D98u;
label_1b4d98:
    // 0x1b4d98: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x1b4d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1b4d9c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1b4d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1b4da0: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B4DA0u;
    {
        const bool branch_taken_0x1b4da0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4da0) {
            ctx->pc = 0x1B4DE8u;
            goto label_1b4de8;
        }
    }
    ctx->pc = 0x1B4DA8u;
    // 0x1b4da8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1b4da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4dac: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1b4dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1b4db0: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1b4db0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1b4db4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1b4db4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1b4db8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1B4DB8u;
    {
        const bool branch_taken_0x1b4db8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4db8) {
            ctx->pc = 0x1B4DE8u;
            goto label_1b4de8;
        }
    }
    ctx->pc = 0x1B4DC0u;
    // 0x1b4dc0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1b4dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b4dc4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1b4dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4dc8: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1b4dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1b4dcc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1b4dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4dd0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1b4dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b4dd4: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1b4dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1b4dd8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1b4dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4ddc: 0xa464127c  sh          $a0, 0x127C($v1)
    ctx->pc = 0x1b4ddcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 4));
    // 0x1b4de0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1B4DE0u;
    {
        const bool branch_taken_0x1b4de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4de0) {
            ctx->pc = 0x1B4E24u;
            goto label_1b4e24;
        }
    }
    ctx->pc = 0x1B4DE8u;
label_1b4de8:
    // 0x1b4de8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b4de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4dec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1b4decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4df0: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1b4df0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1b4df4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1b4df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4df8: 0x9063156c  lbu         $v1, 0x156C($v1)
    ctx->pc = 0x1b4df8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5484)));
    // 0x1b4dfc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1b4dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b4e00: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B4E00u;
    {
        const bool branch_taken_0x1b4e00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4e00) {
            ctx->pc = 0x1B4E18u;
            goto label_1b4e18;
        }
    }
    ctx->pc = 0x1B4E08u;
    // 0x1b4e08: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1b4e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4e0c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1b4e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b4e10: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B4E10u;
    {
        const bool branch_taken_0x1b4e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4e10) {
            ctx->pc = 0x1B4E24u;
            goto label_1b4e24;
        }
    }
    ctx->pc = 0x1B4E18u;
label_1b4e18:
    // 0x1b4e18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b4e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4e1c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1b4e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4e20: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1b4e20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
label_1b4e24:
    // 0x1b4e24: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1b4e24u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4e28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b4e28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4e2c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1b4e2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b4e30: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4E30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4E38u;
}
