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

// Function: Get_joystick_dir
// Address: 0x15e930 - 0x15ea00
void Get_joystick_dir_0x15e930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Get_joystick_dir_0x15e930");
#endif

    ctx->pc = 0x15e930u;

    // 0x15e930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15e930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15e934: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15e934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15e938: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15e938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15e93c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x15e93cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x15e940: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x15e940u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x15e944: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x15e944u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15e948: 0x920200af  lbu         $v0, 0xAF($s0)
    ctx->pc = 0x15e948u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 175)));
    // 0x15e94c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15e94cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15e950: 0x284100c1  slti        $at, $v0, 0xC1
    ctx->pc = 0x15e950u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)193) ? 1 : 0);
    // 0x15e954: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x15E954u;
    {
        const bool branch_taken_0x15e954 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e954) {
            ctx->pc = 0x15E96Cu;
            goto label_15e96c;
        }
    }
    ctx->pc = 0x15E95Cu;
    // 0x15e95c: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x15e95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x15e960: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x15e960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x15e964: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15E964u;
    {
        const bool branch_taken_0x15e964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e964) {
            ctx->pc = 0x15E970u;
            goto label_15e970;
        }
    }
    ctx->pc = 0x15E96Cu;
label_15e96c:
    // 0x15e96c: 0x36310001  ori         $s1, $s1, 0x1
    ctx->pc = 0x15e96cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
label_15e970:
    // 0x15e970: 0x920200af  lbu         $v0, 0xAF($s0)
    ctx->pc = 0x15e970u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 175)));
    // 0x15e974: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15e974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15e978: 0x28420040  slti        $v0, $v0, 0x40
    ctx->pc = 0x15e978u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x15e97c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15E97Cu;
    {
        const bool branch_taken_0x15e97c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e97c) {
            ctx->pc = 0x15E994u;
            goto label_15e994;
        }
    }
    ctx->pc = 0x15E984u;
    // 0x15e984: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x15e984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x15e988: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x15e988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x15e98c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15E98Cu;
    {
        const bool branch_taken_0x15e98c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e98c) {
            ctx->pc = 0x15E998u;
            goto label_15e998;
        }
    }
    ctx->pc = 0x15E994u;
label_15e994:
    // 0x15e994: 0x36310002  ori         $s1, $s1, 0x2
    ctx->pc = 0x15e994u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)2);
label_15e998:
    // 0x15e998: 0x920200ae  lbu         $v0, 0xAE($s0)
    ctx->pc = 0x15e998u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 174)));
    // 0x15e99c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15e99cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15e9a0: 0x284100c1  slti        $at, $v0, 0xC1
    ctx->pc = 0x15e9a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)193) ? 1 : 0);
    // 0x15e9a4: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x15E9A4u;
    {
        const bool branch_taken_0x15e9a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e9a4) {
            ctx->pc = 0x15E9BCu;
            goto label_15e9bc;
        }
    }
    ctx->pc = 0x15E9ACu;
    // 0x15e9ac: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x15e9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x15e9b0: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x15e9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x15e9b4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15E9B4u;
    {
        const bool branch_taken_0x15e9b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e9b4) {
            ctx->pc = 0x15E9C0u;
            goto label_15e9c0;
        }
    }
    ctx->pc = 0x15E9BCu;
label_15e9bc:
    // 0x15e9bc: 0x36310004  ori         $s1, $s1, 0x4
    ctx->pc = 0x15e9bcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)4);
label_15e9c0:
    // 0x15e9c0: 0x920200ae  lbu         $v0, 0xAE($s0)
    ctx->pc = 0x15e9c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 174)));
    // 0x15e9c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15e9c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15e9c8: 0x28420040  slti        $v0, $v0, 0x40
    ctx->pc = 0x15e9c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x15e9cc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15E9CCu;
    {
        const bool branch_taken_0x15e9cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e9cc) {
            ctx->pc = 0x15E9E4u;
            goto label_15e9e4;
        }
    }
    ctx->pc = 0x15E9D4u;
    // 0x15e9d4: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x15e9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x15e9d8: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x15e9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x15e9dc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15E9DCu;
    {
        const bool branch_taken_0x15e9dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e9dc) {
            ctx->pc = 0x15E9E8u;
            goto label_15e9e8;
        }
    }
    ctx->pc = 0x15E9E4u;
label_15e9e4:
    // 0x15e9e4: 0x36310008  ori         $s1, $s1, 0x8
    ctx->pc = 0x15e9e4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)8);
label_15e9e8:
    // 0x15e9e8: 0x72201628  paddub      $v0, $s1, $zero
    ctx->pc = 0x15e9e8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x15e9ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15e9ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15e9f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15e9f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e9f4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x15e9f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15e9f8: 0x3e00008  jr          $ra
    ctx->pc = 0x15E9F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E9F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15EA00u;
}
