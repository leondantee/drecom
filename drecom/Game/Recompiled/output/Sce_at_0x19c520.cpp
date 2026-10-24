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

// Function: Sce_at
// Address: 0x19c520 - 0x19c5fc
void Sce_at_0x19c520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Sce_at_0x19c520");
#endif

    switch (ctx->pc) {
        case 0x19c55cu: goto label_19c55c;
        case 0x19c574u: goto label_19c574;
        case 0x19c590u: goto label_19c590;
        case 0x19c5a0u: goto label_19c5a0;
        case 0x19c5c4u: goto label_19c5c4;
        default: break;
    }

    ctx->pc = 0x19c520u;

    // 0x19c520: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19c520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19c524: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x19c524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x19c528: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19c528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19c52c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19c52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19c530: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19c530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19c534: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x19c534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x19c538: 0x2451bb48  addiu       $s1, $v0, -0x44B8
    ctx->pc = 0x19c538u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949704));
    // 0x19c53c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19c53cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19c540: 0xac201aa0  sw          $zero, 0x1AA0($at)
    ctx->pc = 0x19c540u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5D1AA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1AA0u, _value); } while (0);
    // 0x19c544: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19c544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19c548: 0x24441a5c  addiu       $a0, $v0, 0x1A5C
    ctx->pc = 0x19c548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6748));
    // 0x19c54c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x19c54cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19c550: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x19c550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x19c554: 0xc046314  jal         func_118C50
    ctx->pc = 0x19C554u;
    SET_GPR_U32(ctx, 31, 0x19C55Cu);
    ctx->pc = 0x118C50u;
    {
        ctx->pc = 0x19C55Cu;
        ps2_stubs::memset(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19C55Cu) { return; }
    ctx->pc = 0x19C55Cu;
label_19c55c:
    // 0x19c55c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19c55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19c560: 0x24441a6c  addiu       $a0, $v0, 0x1A6C
    ctx->pc = 0x19c560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6764));
    // 0x19c564: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x19c564u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19c568: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x19c568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x19c56c: 0xc046314  jal         func_118C50
    ctx->pc = 0x19C56Cu;
    SET_GPR_U32(ctx, 31, 0x19C574u);
    ctx->pc = 0x118C50u;
    {
        ctx->pc = 0x19C574u;
        ps2_stubs::memset(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19C574u) { return; }
    ctx->pc = 0x19C574u;
label_19c574:
    // 0x19c574: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x19c574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x19c578: 0xac2095b4  sw          $zero, -0x6A4C($at)
    ctx->pc = 0x19c578u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6195B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6195B4u, _value); } while (0);
    // 0x19c57c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x19c57cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x19c580: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x19c580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x19c584: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19c584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c588: 0xc067180  jal         func_19C600
    ctx->pc = 0x19C588u;
    SET_GPR_U32(ctx, 31, 0x19C590u);
    ctx->pc = 0x19C600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C600u, 0x19C588u, 0x19C590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C590u;
label_19c590:
    // 0x19c590: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x19c590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x19c594: 0x8c32bb40  lw          $s2, -0x44C0($at)
    ctx->pc = 0x19c594u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x47BB40u));
    // 0x19c598: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x19C598u;
    {
        const bool branch_taken_0x19c598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c598) {
            ctx->pc = 0x19C5D0u;
            goto label_19c5d0;
        }
    }
    ctx->pc = 0x19C5A0u;
label_19c5a0:
    // 0x19c5a0: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x19c5a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19c5a4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x19c5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x19c5a8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x19c5a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x19c5ac: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19C5ACu;
    {
        const bool branch_taken_0x19c5ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c5ac) {
            ctx->pc = 0x19C5C8u;
            goto label_19c5c8;
        }
    }
    ctx->pc = 0x19C5B4u;
    // 0x19c5b4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x19c5b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x19c5b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19c5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19c5bc: 0xc067180  jal         func_19C600
    ctx->pc = 0x19C5BCu;
    SET_GPR_U32(ctx, 31, 0x19C5C4u);
    ctx->pc = 0x19C600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C600u, 0x19C5BCu, 0x19C5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C5C4u;
label_19c5c4:
    // 0x19c5c4: 0x0  nop
    ctx->pc = 0x19c5c4u;
    // NOP
label_19c5c8:
    // 0x19c5c8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x19c5c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x19c5cc: 0x0  nop
    ctx->pc = 0x19c5ccu;
    // NOP
label_19c5d0:
    // 0x19c5d0: 0x72401e28  paddub      $v1, $s2, $zero
    ctx->pc = 0x19c5d0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x19c5d4: 0x2472ffff  addiu       $s2, $v1, -0x1
    ctx->pc = 0x19c5d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x19c5d8: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x19C5D8u;
    {
        const bool branch_taken_0x19c5d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19c5d8) {
            ctx->pc = 0x19C5A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19c5a0;
        }
    }
    ctx->pc = 0x19C5E0u;
    // 0x19c5e0: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x19c5e0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19c5e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19c5e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19c5e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19c5e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c5ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19c5ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c5f0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x19c5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19c5f4: 0x3e00008  jr          $ra
    ctx->pc = 0x19C5F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C5F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C5FCu;
}
