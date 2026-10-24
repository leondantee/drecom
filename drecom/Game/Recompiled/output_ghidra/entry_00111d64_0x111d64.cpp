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

// Function: entry_00111d64
// Address: 0x111d64 - 0x111e48
void entry_00111d64_0x111d64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111d64_0x111d64");
#endif

    ctx->pc = 0x111d64u;

    // 0x111d64: 0x3c013811  lui         $at, 0x3811
    ctx->pc = 0x111d64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14353 << 16));
    // 0x111d68: 0x3421ef08  ori         $at, $at, 0xEF08
    ctx->pc = 0x111d68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61192);
    // 0x111d6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x111d6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x111d70: 0x3c013a4f  lui         $at, 0x3A4F
    ctx->pc = 0x111d70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14927 << 16));
    // 0x111d74: 0x34217f04  ori         $at, $at, 0x7F04
    ctx->pc = 0x111d74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32516);
    // 0x111d78: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x111d78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x111d7c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x111d7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x111d80: 0x3c01bd24  lui         $at, 0xBD24
    ctx->pc = 0x111d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48420 << 16));
    // 0x111d84: 0x34211146  ori         $at, $at, 0x1146
    ctx->pc = 0x111d84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4422);
    // 0x111d88: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x111d88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x111d8c: 0x3c013d9d  lui         $at, 0x3D9D
    ctx->pc = 0x111d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15773 << 16));
    // 0x111d90: 0x3421c62e  ori         $at, $at, 0xC62E
    ctx->pc = 0x111d90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50734);
    // 0x111d94: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x111d94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x111d98: 0x3c01bf30  lui         $at, 0xBF30
    ctx->pc = 0x111d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48944 << 16));
    // 0x111d9c: 0x34213361  ori         $at, $at, 0x3361
    ctx->pc = 0x111d9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13153);
    // 0x111da0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x111da0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x111da4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x111da4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x111da8: 0x3c013e4e  lui         $at, 0x3E4E
    ctx->pc = 0x111da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15950 << 16));
    // 0x111dac: 0x34210aa8  ori         $at, $at, 0xAA8
    ctx->pc = 0x111dacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2728);
    // 0x111db0: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x111db0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x111db4: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x111db4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x111db8: 0x3c014001  lui         $at, 0x4001
    ctx->pc = 0x111db8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16385 << 16));
    // 0x111dbc: 0x3421572d  ori         $at, $at, 0x572D
    ctx->pc = 0x111dbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22317);
    // 0x111dc0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x111dc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x111dc4: 0x3c01bea6  lui         $at, 0xBEA6
    ctx->pc = 0x111dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48806 << 16));
    // 0x111dc8: 0x3421b090  ori         $at, $at, 0xB090
    ctx->pc = 0x111dc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45200);
    // 0x111dcc: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x111dccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x111dd0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x111dd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x111dd4: 0x3c01c019  lui         $at, 0xC019
    ctx->pc = 0x111dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49177 << 16));
    // 0x111dd8: 0x3421d139  ori         $at, $at, 0xD139
    ctx->pc = 0x111dd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53561);
    // 0x111ddc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x111ddcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x111de0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x111de0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x111de4: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x111de4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x111de8: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x111de8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x111dec: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x111decu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x111df0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x111df0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x111df4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x111df4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x111df8: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x111df8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x111dfc: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x111dfcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x111e00: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x111e00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x111e04: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x111e04u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x111e08: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x111e08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x111e0c: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x111e0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x111e10: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x111e10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x111e14: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x111e14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x111e18: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x111e18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x111e1c: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x111e1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x111e20: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x111e20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x111e24: 0x46030d80  add.s       $f22, $f1, $f3
    ctx->pc = 0x111e24u;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x111e28: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x111e28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x111e2c: 0x4600a542  mul.s       $f21, $f20, $f0
    ctx->pc = 0x111e2cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x111e30: 0x0  nop
    ctx->pc = 0x111e30u;
    // NOP
    // 0x111e34: 0x0  nop
    ctx->pc = 0x111e34u;
    // NOP
    // 0x111e38: 0x4616aa03  div.s       $f8, $f21, $f22
    ctx->pc = 0x111e38u;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[8] = FPU_DIV_S(ctx->f[21], ctx->f[22]); }
    // 0x111e3c: 0x46086002  mul.s       $f0, $f12, $f8
    ctx->pc = 0x111e3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[8]);
    // 0x111e40: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x111E40u;
    {
        const bool branch_taken_0x111e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111E40u;
        // 0x111e44: 0x46006000  add.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x111e40) {
            ctx->pc = 0x11200Cu;
            return;
        }
    }
    ctx->pc = 0x111E48u;
}
