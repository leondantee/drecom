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

// Function: entry_002f6614
// Address: 0x2f6614 - 0x2f66fc
void entry_002f6614_0x2f6614(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f6614_0x2f6614");
#endif

    switch (ctx->pc) {
        case 0x2f662cu: goto label_2f662c;
        case 0x2f6654u: goto label_2f6654;
        case 0x2f6670u: goto label_2f6670;
        case 0x2f668cu: goto label_2f668c;
        case 0x2f66dcu: goto label_2f66dc;
        case 0x2f66f4u: goto label_2f66f4;
        default: break;
    }

    ctx->pc = 0x2f6614u;

    // 0x2f6614: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2f6614u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2f6618: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x2f6618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2f661c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2f661cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2f6620: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2f6620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f6624: 0xc06553c  jal         func_1954F0
    ctx->pc = 0x2F6624u;
    SET_GPR_U32(ctx, 31, 0x2F662Cu);
    ctx->pc = 0x1954F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1954F0u, 0x2F6624u, 0x2F662Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F662Cu;
label_2f662c:
    // 0x2f662c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2f662cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f6630: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2f6630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2f6634: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2f6634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2f6638: 0x12030030  beq         $s0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x2F6638u;
    {
        const bool branch_taken_0x2f6638 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f6638) {
            ctx->pc = 0x2F66FCu;
            return;
        }
    }
    ctx->pc = 0x2F6640u;
    // 0x2f6640: 0x8e02020c  lw          $v0, 0x20C($s0)
    ctx->pc = 0x2f6640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x2f6644: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x2f6644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x2f6648: 0xae02020c  sw          $v0, 0x20C($s0)
    ctx->pc = 0x2f6648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 2));
    // 0x2f664c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F664Cu;
    SET_GPR_U32(ctx, 31, 0x2F6654u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F664Cu, 0x2F6654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6654u;
label_2f6654:
    // 0x2f6654: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2f6654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2f6658: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f6658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f665c: 0x0  nop
    ctx->pc = 0x2f665cu;
    // NOP
    // 0x2f6660: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f6660u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f6664: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2f6664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2f6668: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F6668u;
    SET_GPR_U32(ctx, 31, 0x2F6670u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F6668u, 0x2F6670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6670u;
label_2f6670:
    // 0x2f6670: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2f6670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2f6674: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f6674u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f6678: 0x0  nop
    ctx->pc = 0x2f6678u;
    // NOP
    // 0x2f667c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f667cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f6680: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2f6680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2f6684: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F6684u;
    SET_GPR_U32(ctx, 31, 0x2F668Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F6684u, 0x2F668Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F668Cu;
label_2f668c:
    // 0x2f668c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2f668cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2f6690: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f6690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f6694: 0x0  nop
    ctx->pc = 0x2f6694u;
    // NOP
    // 0x2f6698: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f6698u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f669c: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2f669cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2f66a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f66a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f66a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f66a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f66a8: 0x0  nop
    ctx->pc = 0x2f66a8u;
    // NOP
    // 0x2f66ac: 0xe600005c  swc1        $f0, 0x5C($s0)
    ctx->pc = 0x2f66acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x2f66b0: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x2f66b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x2f66b4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2f66b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2f66b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2f66b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f66bc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2f66bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f66c0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f66c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f66c4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2f66c4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f66c8: 0x260700b0  addiu       $a3, $s0, 0xB0
    ctx->pc = 0x2f66c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x2f66cc: 0x26080050  addiu       $t0, $s0, 0x50
    ctx->pc = 0x2f66ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x2f66d0: 0x24090032  addiu       $t1, $zero, 0x32
    ctx->pc = 0x2f66d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2f66d4: 0xc0c474c  jal         func_311D30
    ctx->pc = 0x2F66D4u;
    SET_GPR_U32(ctx, 31, 0x2F66DCu);
    ctx->pc = 0x311D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311D30u, 0x2F66D4u, 0x2F66DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F66DCu;
label_2f66dc:
    // 0x2f66dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f66dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f66e0: 0x12230009  beq         $s1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F66E0u;
    {
        const bool branch_taken_0x2f66e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f66e0) {
            ctx->pc = 0x2F6708u;
            return;
        }
    }
    ctx->pc = 0x2F66E8u;
    // 0x2f66e8: 0x260400b0  addiu       $a0, $s0, 0xB0
    ctx->pc = 0x2f66e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x2f66ec: 0xc0c4948  jal         func_312520
    ctx->pc = 0x2F66ECu;
    SET_GPR_U32(ctx, 31, 0x2F66F4u);
    ctx->pc = 0x312520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312520u, 0x2F66ECu, 0x2F66F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F66F4u;
label_2f66f4:
    // 0x2f66f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F66F4u;
    {
        const bool branch_taken_0x2f66f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f66f4) {
            ctx->pc = 0x2F6708u;
            return;
        }
    }
    ctx->pc = 0x2F66FCu;
}
