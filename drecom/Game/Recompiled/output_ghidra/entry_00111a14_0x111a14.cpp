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

// Function: entry_00111a14
// Address: 0x111a14 - 0x111b40
void entry_00111a14_0x111a14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111a14_0x111a14");
#endif

    switch (ctx->pc) {
        case 0x111b00u: goto label_111b00;
        default: break;
    }

    ctx->pc = 0x111a14u;

    // 0x111a14: 0x481004a  bgez        $a0, . + 4 + (0x4A << 2)
    ctx->pc = 0x111A14u;
    {
        const bool branch_taken_0x111a14 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x111a14) {
            ctx->pc = 0x111B40u;
            return;
        }
    }
    ctx->pc = 0x111A1Cu;
    // 0x111a1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x111a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x111a20: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x111a20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x111a24: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x111a24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x111a28: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x111a28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x111a2c: 0x460a5880  add.s       $f2, $f11, $f10
    ctx->pc = 0x111a2cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[11], ctx->f[10]);
    // 0x111a30: 0x3c013811  lui         $at, 0x3811
    ctx->pc = 0x111a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14353 << 16));
    // 0x111a34: 0x3421ef08  ori         $at, $at, 0xEF08
    ctx->pc = 0x111a34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61192);
    // 0x111a38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x111a38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x111a3c: 0x3c013a4f  lui         $at, 0x3A4F
    ctx->pc = 0x111a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14927 << 16));
    // 0x111a40: 0x34217f04  ori         $at, $at, 0x7F04
    ctx->pc = 0x111a40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32516);
    // 0x111a44: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x111a44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x111a48: 0x3c01bd24  lui         $at, 0xBD24
    ctx->pc = 0x111a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48420 << 16));
    // 0x111a4c: 0x34211146  ori         $at, $at, 0x1146
    ctx->pc = 0x111a4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4422);
    // 0x111a50: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x111a50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x111a54: 0x46031542  mul.s       $f21, $f2, $f3
    ctx->pc = 0x111a54u;
    ctx->f[21] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x111a58: 0x3c013d9d  lui         $at, 0x3D9D
    ctx->pc = 0x111a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15773 << 16));
    // 0x111a5c: 0x3421c62e  ori         $at, $at, 0xC62E
    ctx->pc = 0x111a5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50734);
    // 0x111a60: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x111a60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x111a64: 0x3c01bf30  lui         $at, 0xBF30
    ctx->pc = 0x111a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48944 << 16));
    // 0x111a68: 0x34213361  ori         $at, $at, 0x3361
    ctx->pc = 0x111a68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13153);
    // 0x111a6c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x111a6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x111a70: 0x3c013e4e  lui         $at, 0x3E4E
    ctx->pc = 0x111a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15950 << 16));
    // 0x111a74: 0x34210aa8  ori         $at, $at, 0xAA8
    ctx->pc = 0x111a74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2728);
    // 0x111a78: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x111a78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x111a7c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x111a7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x111a80: 0x3c014001  lui         $at, 0x4001
    ctx->pc = 0x111a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16385 << 16));
    // 0x111a84: 0x3421572d  ori         $at, $at, 0x572D
    ctx->pc = 0x111a84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22317);
    // 0x111a88: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x111a88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x111a8c: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x111a8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x111a90: 0x3c01bea6  lui         $at, 0xBEA6
    ctx->pc = 0x111a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48806 << 16));
    // 0x111a94: 0x3421b090  ori         $at, $at, 0xB090
    ctx->pc = 0x111a94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45200);
    // 0x111a98: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x111a98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x111a9c: 0x3c01c019  lui         $at, 0xC019
    ctx->pc = 0x111a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49177 << 16));
    // 0x111aa0: 0x3421d139  ori         $at, $at, 0xD139
    ctx->pc = 0x111aa0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53561);
    // 0x111aa4: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x111aa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x111aa8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x111aa8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x111aac: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x111aacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x111ab0: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x111ab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x111ab4: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x111ab4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x111ab8: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x111ab8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x111abc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x111abcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x111ac0: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x111ac0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x111ac4: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x111ac4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x111ac8: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x111ac8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x111acc: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x111accu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x111ad0: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x111ad0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x111ad4: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x111ad4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x111ad8: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x111ad8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x111adc: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x111adcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x111ae0: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x111ae0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x111ae4: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x111ae4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x111ae8: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x111ae8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x111aec: 0x460a0d80  add.s       $f22, $f1, $f10
    ctx->pc = 0x111aecu;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[10]);
    // 0x111af0: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x111af0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x111af4: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x111af4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x111af8: 0xc0449be  jal         func_1126F8
    ctx->pc = 0x111AF8u;
    SET_GPR_U32(ctx, 31, 0x111B00u);
    ctx->pc = 0x111AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111AF8u;
    // 0x111afc: 0x4600ad02  mul.s       $f20, $f21, $f0 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1126F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1126F8u, 0x111AF8u, 0x111B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111B00u;
label_111b00:
    // 0x111b00: 0x46000286  mov.s       $f10, $f0
    ctx->pc = 0x111b00u;
    ctx->f[10] = FPU_MOV_S(ctx->f[0]);
    // 0x111b04: 0x3c0133a2  lui         $at, 0x33A2
    ctx->pc = 0x111b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13218 << 16));
    // 0x111b08: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x111b08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x111b0c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x111b0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x111b10: 0x0  nop
    ctx->pc = 0x111b10u;
    // NOP
    // 0x111b14: 0x0  nop
    ctx->pc = 0x111b14u;
    // NOP
    // 0x111b18: 0x4616a303  div.s       $f12, $f20, $f22
    ctx->pc = 0x111b18u;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[22]); }
    // 0x111b1c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x111b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x111b20: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x111b20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x111b24: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x111b24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x111b28: 0x460a6002  mul.s       $f0, $f12, $f10
    ctx->pc = 0x111b28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[10]);
    // 0x111b2c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x111b2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x111b30: 0x46005000  add.s       $f0, $f10, $f0
    ctx->pc = 0x111b30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[10], ctx->f[0]);
    // 0x111b34: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x111b34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x111b38: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x111B38u;
    {
        const bool branch_taken_0x111b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111B38u;
        // 0x111b3c: 0x46001001  sub.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x111b38) {
            ctx->pc = 0x111C78u;
            return;
        }
    }
    ctx->pc = 0x111B40u;
}
