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

// Function: Om2e_R1_tobikomi
// Address: 0x378930 - 0x378a1c
void Om2e_R1_tobikomi_0x378930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om2e_R1_tobikomi_0x378930");
#endif

    switch (ctx->pc) {
        case 0x3789a0u: goto label_3789a0;
        case 0x3789c0u: goto label_3789c0;
        case 0x3789ccu: goto label_3789cc;
        default: break;
    }

    ctx->pc = 0x378930u;

    // 0x378930: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x378930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x378934: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x378934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x378938: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x378938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37893c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x37893cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x378940: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x378940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x378944: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x378944u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x378948: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x378948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37894c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x37894cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x378950: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x378950u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x378954: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x378954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x378958: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x378958u;
    {
        const bool branch_taken_0x378958 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x378958) {
            ctx->pc = 0x3789B0u;
            goto label_3789b0;
        }
    }
    ctx->pc = 0x378960u;
    // 0x378960: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x378960u;
    {
        const bool branch_taken_0x378960 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x378960) {
            ctx->pc = 0x378970u;
            goto label_378970;
        }
    }
    ctx->pc = 0x378968u;
    // 0x378968: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x378968u;
    {
        const bool branch_taken_0x378968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x378968) {
            ctx->pc = 0x378A08u;
            goto label_378a08;
        }
    }
    ctx->pc = 0x378970u;
label_378970:
    // 0x378970: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x378970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x378974: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x378974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x378978: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x378978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x37897c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x37897cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x378980: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x378980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x378984: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x378984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x378988: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x378988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x37898c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x37898cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x378990: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x378990u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x378994: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x378994u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x378998: 0xc0965d0  jal         func_259740
    ctx->pc = 0x378998u;
    SET_GPR_U32(ctx, 31, 0x3789A0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x378998u, 0x3789A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3789A0u;
label_3789a0:
    // 0x3789a0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3789a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3789a4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x3789a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3789a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3789a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3789ac: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x3789acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_3789b0:
    // 0x3789b0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3789b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3789b4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3789b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3789b8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3789B8u;
    SET_GPR_U32(ctx, 31, 0x3789C0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3789B8u, 0x3789C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3789C0u;
label_3789c0:
    // 0x3789c0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3789c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3789c4: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x3789C4u;
    SET_GPR_U32(ctx, 31, 0x3789CCu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x3789C4u, 0x3789CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3789CCu;
label_3789cc:
    // 0x3789cc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3789ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3789d0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x3789d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x3789d4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3789D4u;
    {
        const bool branch_taken_0x3789d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3789d4) {
            ctx->pc = 0x378A08u;
            goto label_378a08;
        }
    }
    ctx->pc = 0x3789DCu;
    // 0x3789dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3789dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3789e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3789e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3789e4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3789e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3789e8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3789e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3789ec: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3789ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3789f0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3789f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3789f4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3789f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3789f8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3789f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3789fc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3789fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x378a00: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x378a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x378a04: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x378a04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_378a08:
    // 0x378a08: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x378a08u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x378a0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x378a0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x378a10: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x378a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x378a14: 0x3e00008  jr          $ra
    ctx->pc = 0x378A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x378A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x378A1Cu;
}
