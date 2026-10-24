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

// Function: makebuff
// Address: 0x33a950 - 0x33aa48
void makebuff_0x33a950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("makebuff_0x33a950");
#endif

    switch (ctx->pc) {
        case 0x33a984u: goto label_33a984;
        case 0x33a9c4u: goto label_33a9c4;
        default: break;
    }

    ctx->pc = 0x33a950u;

    // 0x33a950: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33a950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33a954: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x33a954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x33a958: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33a958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33a95c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x33a95cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x33a960: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x33a960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x33a964: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x33a964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33a968: 0x28410005  slti        $at, $v0, 0x5
    ctx->pc = 0x33a968u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x33a96c: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x33A96Cu;
    {
        const bool branch_taken_0x33a96c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x33a96c) {
            ctx->pc = 0x33A990u;
            goto label_33a990;
        }
    }
    ctx->pc = 0x33A974u;
    // 0x33a974: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x33a974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x33a978: 0x24442880  addiu       $a0, $v0, 0x2880
    ctx->pc = 0x33a978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10368));
    // 0x33a97c: 0xc046760  jal         func_119D80
    ctx->pc = 0x33A97Cu;
    SET_GPR_U32(ctx, 31, 0x33A984u);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x33A984u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x33A984u) { return; }
    ctx->pc = 0x33A984u;
label_33a984:
    // 0x33a984: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x33a984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33a988: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x33A988u;
    {
        const bool branch_taken_0x33a988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a988) {
            ctx->pc = 0x33AA34u;
            goto label_33aa34;
        }
    }
    ctx->pc = 0x33A990u;
label_33a990:
    // 0x33a990: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a994: 0x8c235440  lw          $v1, 0x5440($at)
    ctx->pc = 0x33a994u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x895440u));
    // 0x33a998: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x33a998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33a99c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x33a99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x33a9a0: 0x28420200  slti        $v0, $v0, 0x200
    ctx->pc = 0x33a9a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x33a9a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33A9A4u;
    {
        const bool branch_taken_0x33a9a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33a9a4) {
            ctx->pc = 0x33A9B8u;
            goto label_33a9b8;
        }
    }
    ctx->pc = 0x33A9ACu;
    // 0x33a9ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x33a9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33a9b0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x33A9B0u;
    {
        const bool branch_taken_0x33a9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a9b0) {
            ctx->pc = 0x33AA34u;
            goto label_33aa34;
        }
    }
    ctx->pc = 0x33A9B8u;
label_33a9b8:
    // 0x33a9b8: 0x24100018  addiu       $s0, $zero, 0x18
    ctx->pc = 0x33a9b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x33a9bc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x33A9BCu;
    {
        const bool branch_taken_0x33a9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a9bc) {
            ctx->pc = 0x33AA08u;
            goto label_33aa08;
        }
    }
    ctx->pc = 0x33A9C4u;
label_33a9c4:
    // 0x33a9c4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x33a9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33a9c8: 0x2021006  srlv        $v0, $v0, $s0
    ctx->pc = 0x33a9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x33a9cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33a9ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33a9d0: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x33a9d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33a9d4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a9d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a9d8: 0x8c235440  lw          $v1, 0x5440($at)
    ctx->pc = 0x33a9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x895440u));
    // 0x33a9dc: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x33a9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33a9e0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a9e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a9e4: 0xac225440  sw          $v0, 0x5440($at)
    ctx->pc = 0x33a9e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x895440u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895440u, _value); } while (0);
    // 0x33a9e8: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x33a9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33a9ec: 0x244250c0  addiu       $v0, $v0, 0x50C0
    ctx->pc = 0x33a9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20672));
    // 0x33a9f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33a9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33a9f4: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x33a9f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x33a9f8: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x33a9f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x33a9fc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x33a9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33aa00: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x33aa00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x33aa04: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x33aa04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_33aa08:
    // 0x33aa08: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x33aa08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33aa0c: 0x1c40ffed  bgtz        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x33AA0Cu;
    {
        const bool branch_taken_0x33aa0c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x33aa0c) {
            ctx->pc = 0x33A9C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33a9c4;
        }
    }
    ctx->pc = 0x33AA14u;
    // 0x33aa14: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x33aa14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x33aa18: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33aa18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33aa1c: 0x8c235440  lw          $v1, 0x5440($at)
    ctx->pc = 0x33aa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x895440u));
    // 0x33aa20: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x33aa20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33aa24: 0x244250c0  addiu       $v0, $v0, 0x50C0
    ctx->pc = 0x33aa24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20672));
    // 0x33aa28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33aa28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33aa2c: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x33aa2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x33aa30: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x33aa30u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_33aa34:
    // 0x33aa34: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x33aa34u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33aa38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33aa38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33aa3c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x33aa3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x33aa40: 0x3e00008  jr          $ra
    ctx->pc = 0x33AA40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33AA40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33AA48u;
}
