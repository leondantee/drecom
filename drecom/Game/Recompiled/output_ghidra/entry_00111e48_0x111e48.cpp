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

// Function: entry_00111e48
// Address: 0x111e48 - 0x111f84
void entry_00111e48_0x111e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111e48_0x111e48");
#endif

    switch (ctx->pc) {
        case 0x111e50u: goto label_111e50;
        case 0x111f34u: goto label_111f34;
        default: break;
    }

    ctx->pc = 0x111e48u;

    // 0x111e48: 0xc045420  jal         func_115080
    ctx->pc = 0x111E48u;
    SET_GPR_U32(ctx, 31, 0x111E50u);
    ctx->pc = 0x115080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115080u, 0x111E48u, 0x111E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111E50u;
label_111e50:
    // 0x111e50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x111e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x111e54: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x111e54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x111e58: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x111e58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x111e5c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x111e5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x111e60: 0x46005201  sub.s       $f8, $f10, $f0
    ctx->pc = 0x111e60u;
    ctx->f[8] = FPU_SUB_S(ctx->f[10], ctx->f[0]);
    // 0x111e64: 0x3c013a4f  lui         $at, 0x3A4F
    ctx->pc = 0x111e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14927 << 16));
    // 0x111e68: 0x34217f04  ori         $at, $at, 0x7F04
    ctx->pc = 0x111e68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32516);
    // 0x111e6c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x111e6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x111e70: 0x3c013811  lui         $at, 0x3811
    ctx->pc = 0x111e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14353 << 16));
    // 0x111e74: 0x3421ef08  ori         $at, $at, 0xEF08
    ctx->pc = 0x111e74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61192);
    // 0x111e78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x111e78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x111e7c: 0x3c01bd24  lui         $at, 0xBD24
    ctx->pc = 0x111e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48420 << 16));
    // 0x111e80: 0x34211146  ori         $at, $at, 0x1146
    ctx->pc = 0x111e80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4422);
    // 0x111e84: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x111e84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x111e88: 0x46024502  mul.s       $f20, $f8, $f2
    ctx->pc = 0x111e88u;
    ctx->f[20] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x111e8c: 0x3c013d9d  lui         $at, 0x3D9D
    ctx->pc = 0x111e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15773 << 16));
    // 0x111e90: 0x3421c62e  ori         $at, $at, 0xC62E
    ctx->pc = 0x111e90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50734);
    // 0x111e94: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x111e94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x111e98: 0x3c01bf30  lui         $at, 0xBF30
    ctx->pc = 0x111e98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48944 << 16));
    // 0x111e9c: 0x34213361  ori         $at, $at, 0x3361
    ctx->pc = 0x111e9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13153);
    // 0x111ea0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x111ea0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x111ea4: 0x3c013e4e  lui         $at, 0x3E4E
    ctx->pc = 0x111ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15950 << 16));
    // 0x111ea8: 0x34210aa8  ori         $at, $at, 0xAA8
    ctx->pc = 0x111ea8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2728);
    // 0x111eac: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x111eacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x111eb0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x111eb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x111eb4: 0x3c014001  lui         $at, 0x4001
    ctx->pc = 0x111eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16385 << 16));
    // 0x111eb8: 0x3421572d  ori         $at, $at, 0x572D
    ctx->pc = 0x111eb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22317);
    // 0x111ebc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x111ebcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x111ec0: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x111ec0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x111ec4: 0x3c01bea6  lui         $at, 0xBEA6
    ctx->pc = 0x111ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48806 << 16));
    // 0x111ec8: 0x3421b090  ori         $at, $at, 0xB090
    ctx->pc = 0x111ec8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45200);
    // 0x111ecc: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x111eccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x111ed0: 0x3c01c019  lui         $at, 0xC019
    ctx->pc = 0x111ed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49177 << 16));
    // 0x111ed4: 0x3421d139  ori         $at, $at, 0xD139
    ctx->pc = 0x111ed4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53561);
    // 0x111ed8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x111ed8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x111edc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x111edcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x111ee0: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x111ee0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x111ee4: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x111ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x111ee8: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x111ee8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x111eec: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x111eecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x111ef0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x111ef0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x111ef4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x111ef4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x111ef8: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x111ef8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x111efc: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x111efcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x111f00: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x111f00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x111f04: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x111f04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x111f08: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x111f08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x111f0c: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x111f0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x111f10: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x111f10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x111f14: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x111f14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x111f18: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x111f18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x111f1c: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x111f1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x111f20: 0x460a0d80  add.s       $f22, $f1, $f10
    ctx->pc = 0x111f20u;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[10]);
    // 0x111f24: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x111f24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x111f28: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x111f28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x111f2c: 0xc0449be  jal         func_1126F8
    ctx->pc = 0x111F2Cu;
    SET_GPR_U32(ctx, 31, 0x111F34u);
    ctx->pc = 0x111F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111F2Cu;
    // 0x111f30: 0x4600a542  mul.s       $f21, $f20, $f0 (Delay Slot)
    ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1126F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1126F8u, 0x111F2Cu, 0x111F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111F34u;
label_111f34:
    // 0x111f34: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x111f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
    // 0x111f38: 0x34429999  ori         $v0, $v0, 0x9999
    ctx->pc = 0x111f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39321);
    // 0x111f3c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x111f3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x111f40: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x111F40u;
    {
        const bool branch_taken_0x111f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111F40u;
        // 0x111f44: 0x460001c6  mov.s       $f7, $f0 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x111f40) {
            ctx->pc = 0x111F84u;
            return;
        }
    }
    ctx->pc = 0x111F48u;
    // 0x111f48: 0x0  nop
    ctx->pc = 0x111f48u;
    // NOP
    // 0x111f4c: 0x0  nop
    ctx->pc = 0x111f4cu;
    // NOP
    // 0x111f50: 0x4616aa03  div.s       $f8, $f21, $f22
    ctx->pc = 0x111f50u;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[8] = FPU_DIV_S(ctx->f[21], ctx->f[22]); }
    // 0x111f54: 0x3c0133a2  lui         $at, 0x33A2
    ctx->pc = 0x111f54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13218 << 16));
    // 0x111f58: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x111f58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x111f5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x111f5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x111f60: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x111f60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x111f64: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x111f64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x111f68: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x111f68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x111f6c: 0x46083842  mul.s       $f1, $f7, $f8
    ctx->pc = 0x111f6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[8]);
    // 0x111f70: 0x46013840  add.s       $f1, $f7, $f1
    ctx->pc = 0x111f70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[7], ctx->f[1]);
    // 0x111f74: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x111f74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x111f78: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x111f78u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x111f7c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x111F7Cu;
    {
        const bool branch_taken_0x111f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111F7Cu;
        // 0x111f80: 0x46011501  sub.s       $f20, $f2, $f1 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x111f7c) {
            ctx->pc = 0x112000u;
            return;
        }
    }
    ctx->pc = 0x111F84u;
}
