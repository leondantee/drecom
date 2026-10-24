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

// Function: entry_002f0e50
// Address: 0x2f0e50 - 0x2f0fcc
void entry_002f0e50_0x2f0e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f0e50_0x2f0e50");
#endif

    switch (ctx->pc) {
        case 0x2f0ed0u: goto label_2f0ed0;
        case 0x2f0eecu: goto label_2f0eec;
        case 0x2f0f08u: goto label_2f0f08;
        case 0x2f0f24u: goto label_2f0f24;
        default: break;
    }

    ctx->pc = 0x2f0e50u;

    // 0x2f0e50: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f0e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f0e54: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f0e54u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f0e58: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f0e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f0e5c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f0e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f0e60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f0e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f0e64: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f0e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f0e68: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f0e68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f0e6c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f0e6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f0e70: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f0e70u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f0e74: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f0e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f0e78: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f0e78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f0e7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f0e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f0e80: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f0e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f0e84: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f0e84u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f0e88: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f0e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f0e8c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f0e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f0e90: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f0e90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f0e94: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2f0e94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f0e98: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x2f0e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2f0e9c: 0x93a20088  lbu         $v0, 0x88($sp)
    ctx->pc = 0x2f0e9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f0ea0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f0ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f0ea4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2f0ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f0ea8: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x2f0ea8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x2f0eac: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x2f0eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x2f0eb0: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x2f0eb0u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2f0eb4: 0x0  nop
    ctx->pc = 0x2f0eb4u;
    // NOP
    // 0x2f0eb8: 0x0  nop
    ctx->pc = 0x2f0eb8u;
    // NOP
    // 0x2f0ebc: 0x1010  mfhi        $v0
    ctx->pc = 0x2f0ebcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2f0ec0: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x2F0EC0u;
    {
        const bool branch_taken_0x2f0ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f0ec0) {
            ctx->pc = 0x2F0FCCu;
            return;
        }
    }
    ctx->pc = 0x2F0EC8u;
    // 0x2f0ec8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F0EC8u;
    SET_GPR_U32(ctx, 31, 0x2F0ED0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F0EC8u, 0x2F0ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0ED0u;
label_2f0ed0:
    // 0x2f0ed0: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2f0ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2f0ed4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f0ed4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f0ed8: 0x0  nop
    ctx->pc = 0x2f0ed8u;
    // NOP
    // 0x2f0edc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f0edcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f0ee0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2f0ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2f0ee4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F0EE4u;
    SET_GPR_U32(ctx, 31, 0x2F0EECu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F0EE4u, 0x2F0EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0EECu;
label_2f0eec:
    // 0x2f0eec: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2f0eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2f0ef0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f0ef0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f0ef4: 0x0  nop
    ctx->pc = 0x2f0ef4u;
    // NOP
    // 0x2f0ef8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f0ef8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f0efc: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2f0efcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2f0f00: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F0F00u;
    SET_GPR_U32(ctx, 31, 0x2F0F08u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F0F00u, 0x2F0F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0F08u;
label_2f0f08:
    // 0x2f0f08: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2f0f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2f0f0c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f0f0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f0f10: 0x0  nop
    ctx->pc = 0x2f0f10u;
    // NOP
    // 0x2f0f14: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f0f14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f0f18: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2f0f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2f0f1c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F0F1Cu;
    SET_GPR_U32(ctx, 31, 0x2F0F24u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F0F1Cu, 0x2F0F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0F24u;
label_2f0f24:
    // 0x2f0f24: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2f0f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2f0f28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f0f28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f0f2c: 0x0  nop
    ctx->pc = 0x2f0f2cu;
    // NOP
    // 0x2f0f30: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f0f30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f0f34: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2f0f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2f0f38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f0f38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f0f3c: 0x0  nop
    ctx->pc = 0x2f0f3cu;
    // NOP
    // 0x2f0f40: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2f0f40u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f0f44: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f0f44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f0f48: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f0f48u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f0f4c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f0f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f0f50: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f0f50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f0f54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f0f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f0f58: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f0f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f0f5c: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f0f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f0f60: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f0f60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f0f64: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f0f64u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f0f68: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f0f68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f0f6c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f0f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f0f70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f0f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f0f74: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f0f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f0f78: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f0f78u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f0f7c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f0f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f0f80: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f0f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f0f84: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f0f84u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f0f88: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f0f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f0f8c: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x2f0f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2f0f90: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2f0f90u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2f0f94: 0x0  nop
    ctx->pc = 0x2f0f94u;
    // NOP
    // 0x2f0f98: 0x0  nop
    ctx->pc = 0x2f0f98u;
    // NOP
    // 0x2f0f9c: 0x1810  mfhi        $v1
    ctx->pc = 0x2f0f9cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2f0fa0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f0fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f0fa4: 0x24428de0  addiu       $v0, $v0, -0x7220
    ctx->pc = 0x2f0fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938080));
    // 0x2f0fa8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f0fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f0fac: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2f0facu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f0fb0: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x2f0fb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f0fb4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f0fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f0fb8: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x2f0fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f0fbc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2f0fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f0fc0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2f0fc0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f0fc4: 0xc0bd36c  jal         func_2F4DB0
    ctx->pc = 0x2F0FC4u;
    SET_GPR_U32(ctx, 31, 0x2F0FCCu);
    ctx->pc = 0x2F4DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4DB0u, 0x2F0FC4u, 0x2F0FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0FCCu;
}
