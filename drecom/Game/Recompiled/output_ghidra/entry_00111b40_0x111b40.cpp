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

// Function: entry_00111b40
// Address: 0x111b40 - 0x111c78
void entry_00111b40_0x111b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111b40_0x111b40");
#endif

    switch (ctx->pc) {
        case 0x111b60u: goto label_111b60;
        default: break;
    }

    ctx->pc = 0x111b40u;

    // 0x111b40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x111b40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x111b44: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x111b44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x111b48: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x111b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x111b4c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x111b4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x111b50: 0x460ba001  sub.s       $f0, $f20, $f11
    ctx->pc = 0x111b50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[11]);
    // 0x111b54: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x111b54u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x111b58: 0xc0449be  jal         func_1126F8
    ctx->pc = 0x111B58u;
    SET_GPR_U32(ctx, 31, 0x111B60u);
    ctx->pc = 0x111B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111B58u;
    // 0x111b5c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1126F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1126F8u, 0x111B58u, 0x111B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111B60u;
label_111b60:
    // 0x111b60: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x111b60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x111b64: 0x44835000  mtc1        $v1, $f10
    ctx->pc = 0x111b64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x111b68: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x111b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x111b6c: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x111b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x111b70: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x111b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x111b74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x111b74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x111b78: 0x46000082  mul.s       $f2, $f0, $f0
    ctx->pc = 0x111b78u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x111b7c: 0x3c013811  lui         $at, 0x3811
    ctx->pc = 0x111b7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14353 << 16));
    // 0x111b80: 0x3421ef08  ori         $at, $at, 0xEF08
    ctx->pc = 0x111b80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61192);
    // 0x111b84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x111b84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x111b88: 0x3c013a4f  lui         $at, 0x3A4F
    ctx->pc = 0x111b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14927 << 16));
    // 0x111b8c: 0x34217f04  ori         $at, $at, 0x7F04
    ctx->pc = 0x111b8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32516);
    // 0x111b90: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x111b90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x111b94: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x111b94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x111b98: 0x3c013d9d  lui         $at, 0x3D9D
    ctx->pc = 0x111b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15773 << 16));
    // 0x111b9c: 0x3421c62e  ori         $at, $at, 0xC62E
    ctx->pc = 0x111b9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50734);
    // 0x111ba0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x111ba0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x111ba4: 0x3c01bd24  lui         $at, 0xBD24
    ctx->pc = 0x111ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48420 << 16));
    // 0x111ba8: 0x34211146  ori         $at, $at, 0x1146
    ctx->pc = 0x111ba8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4422);
    // 0x111bac: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x111bacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x111bb0: 0x4602a881  sub.s       $f2, $f21, $f2
    ctx->pc = 0x111bb0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
    // 0x111bb4: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x111bb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x111bb8: 0x3c01bf30  lui         $at, 0xBF30
    ctx->pc = 0x111bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48944 << 16));
    // 0x111bbc: 0x34213361  ori         $at, $at, 0x3361
    ctx->pc = 0x111bbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13153);
    // 0x111bc0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x111bc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x111bc4: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x111bc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x111bc8: 0x3c01bea6  lui         $at, 0xBEA6
    ctx->pc = 0x111bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48806 << 16));
    // 0x111bcc: 0x3421b090  ori         $at, $at, 0xB090
    ctx->pc = 0x111bccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45200);
    // 0x111bd0: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x111bd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x111bd4: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x111bd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x111bd8: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x111bd8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x111bdc: 0x3c014001  lui         $at, 0x4001
    ctx->pc = 0x111bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16385 << 16));
    // 0x111be0: 0x3421572d  ori         $at, $at, 0x572D
    ctx->pc = 0x111be0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22317);
    // 0x111be4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x111be4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x111be8: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x111be8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x111bec: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x111becu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x111bf0: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x111bf0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x111bf4: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x111bf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x111bf8: 0x460650c0  add.s       $f3, $f10, $f6
    ctx->pc = 0x111bf8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[10], ctx->f[6]);
    // 0x111bfc: 0x3c013e4e  lui         $at, 0x3E4E
    ctx->pc = 0x111bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15950 << 16));
    // 0x111c00: 0x34210aa8  ori         $at, $at, 0xAA8
    ctx->pc = 0x111c00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2728);
    // 0x111c04: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x111c04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x111c08: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x111c08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x111c0c: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x111c0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x111c10: 0x0  nop
    ctx->pc = 0x111c10u;
    // NOP
    // 0x111c14: 0x0  nop
    ctx->pc = 0x111c14u;
    // NOP
    // 0x111c18: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x111c18u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[3]); }
    // 0x111c1c: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x111c1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x111c20: 0x3c01c019  lui         $at, 0xC019
    ctx->pc = 0x111c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49177 << 16));
    // 0x111c24: 0x3421d139  ori         $at, $at, 0xD139
    ctx->pc = 0x111c24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53561);
    // 0x111c28: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x111c28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x111c2c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x111c2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x111c30: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x111c30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x111c34: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x111c34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x111c38: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x111c38u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x111c3c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x111c3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x111c40: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x111c40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x111c44: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x111c44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x111c48: 0x46140d80  add.s       $f22, $f1, $f20
    ctx->pc = 0x111c48u;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x111c4c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x111c4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x111c50: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x111c50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x111c54: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x111c54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x111c58: 0x4600ad02  mul.s       $f20, $f21, $f0
    ctx->pc = 0x111c58u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x111c5c: 0x0  nop
    ctx->pc = 0x111c5cu;
    // NOP
    // 0x111c60: 0x0  nop
    ctx->pc = 0x111c60u;
    // NOP
    // 0x111c64: 0x4616a303  div.s       $f12, $f20, $f22
    ctx->pc = 0x111c64u;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[22]); }
    // 0x111c68: 0x460a6002  mul.s       $f0, $f12, $f10
    ctx->pc = 0x111c68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[10]);
    // 0x111c6c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x111c6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x111c70: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x111c70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x111c74: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x111c74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    ctx->pc = 0x111c78u;
}
