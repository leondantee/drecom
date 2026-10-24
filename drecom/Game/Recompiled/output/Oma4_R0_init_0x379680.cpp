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

// Function: Oma4_R0_init
// Address: 0x379680 - 0x37979c
void Oma4_R0_init_0x379680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Oma4_R0_init_0x379680");
#endif

    switch (ctx->pc) {
        case 0x379758u: goto label_379758;
        default: break;
    }

    ctx->pc = 0x379680u;

    // 0x379680: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x379680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x379684: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x379684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x379688: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x379688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37968c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37968cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x379690: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x379690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x379694: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x379694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x379698: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x379698u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x37969c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x37969cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3796a0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3796a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3796a4: 0x1083001a  beq         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3796A4u;
    {
        const bool branch_taken_0x3796a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3796a4) {
            ctx->pc = 0x379710u;
            goto label_379710;
        }
    }
    ctx->pc = 0x3796ACu;
    // 0x3796ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3796acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3796b0: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3796B0u;
    {
        const bool branch_taken_0x3796b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3796b0) {
            ctx->pc = 0x3796DCu;
            goto label_3796dc;
        }
    }
    ctx->pc = 0x3796B8u;
    // 0x3796b8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3796B8u;
    {
        const bool branch_taken_0x3796b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3796b8) {
            ctx->pc = 0x3796C8u;
            goto label_3796c8;
        }
    }
    ctx->pc = 0x3796C0u;
    // 0x3796c0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x3796C0u;
    {
        const bool branch_taken_0x3796c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3796c0) {
            ctx->pc = 0x379758u;
            goto label_379758;
        }
    }
    ctx->pc = 0x3796C8u;
label_3796c8:
    // 0x3796c8: 0x24047f80  addiu       $a0, $zero, 0x7F80
    ctx->pc = 0x3796c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32640));
    // 0x3796cc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3796ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3796d0: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x3796d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
    // 0x3796d4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x3796D4u;
    {
        const bool branch_taken_0x3796d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3796d4) {
            ctx->pc = 0x379758u;
            goto label_379758;
        }
    }
    ctx->pc = 0x3796DCu;
label_3796dc:
    // 0x3796dc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3796dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3796e0: 0x8c700058  lw          $s0, 0x58($v1)
    ctx->pc = 0x3796e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x3796e4: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x3796e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3796e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3796e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3796ec: 0xa06411ec  sb          $a0, 0x11EC($v1)
    ctx->pc = 0x3796ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4588), (uint8_t)GPR_U32(ctx, 4));
    // 0x3796f0: 0x24047f60  addiu       $a0, $zero, 0x7F60
    ctx->pc = 0x3796f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32608));
    // 0x3796f4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3796f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3796f8: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x3796f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
    // 0x3796fc: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3796fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x379700: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x379700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x379704: 0xac64128c  sw          $a0, 0x128C($v1)
    ctx->pc = 0x379704u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4748), GPR_U32(ctx, 4));
    // 0x379708: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x379708u;
    {
        const bool branch_taken_0x379708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x379708) {
            ctx->pc = 0x379758u;
            goto label_379758;
        }
    }
    ctx->pc = 0x379710u;
label_379710:
    // 0x379710: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x379710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x379714: 0x8c500058  lw          $s0, 0x58($v0)
    ctx->pc = 0x379714u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x379718: 0x8e110034  lw          $s1, 0x34($s0)
    ctx->pc = 0x379718u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x37971c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x37971cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x379720: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x379720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x379724: 0xa04311ec  sb          $v1, 0x11EC($v0)
    ctx->pc = 0x379724u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4588), (uint8_t)GPR_U32(ctx, 3));
    // 0x379728: 0x24037f80  addiu       $v1, $zero, 0x7F80
    ctx->pc = 0x379728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32640));
    // 0x37972c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x37972cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x379730: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x379730u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x379734: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x379734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x379738: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x379738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37973c: 0xac43128c  sw          $v1, 0x128C($v0)
    ctx->pc = 0x37973cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4748), GPR_U32(ctx, 3));
    // 0x379740: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x379740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x379744: 0x8c500058  lw          $s0, 0x58($v0)
    ctx->pc = 0x379744u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x379748: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x379748u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x37974c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37974cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x379750: 0xc0963b8  jal         func_258EE0
    ctx->pc = 0x379750u;
    SET_GPR_U32(ctx, 31, 0x379758u);
    ctx->pc = 0x258EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258EE0u, 0x379750u, 0x379758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379758u;
label_379758:
    // 0x379758: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x379758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37975c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x37975cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x379760: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x379760u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x379764: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x379764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x379768: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x379768u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x37976c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x37976cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x379770: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x379770u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x379774: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x379774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x379778: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x379778u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x37977c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x37977cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x379780: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x379780u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x379784: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x379784u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x379788: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x379788u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37978c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37978cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x379790: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x379790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x379794: 0x3e00008  jr          $ra
    ctx->pc = 0x379794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37979Cu;
}
