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

// Function: entry_002f4b88
// Address: 0x2f4b88 - 0x2f4d04
void entry_002f4b88_0x2f4b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f4b88_0x2f4b88");
#endif

    switch (ctx->pc) {
        case 0x2f4c08u: goto label_2f4c08;
        case 0x2f4c24u: goto label_2f4c24;
        case 0x2f4c40u: goto label_2f4c40;
        case 0x2f4c5cu: goto label_2f4c5c;
        default: break;
    }

    ctx->pc = 0x2f4b88u;

    // 0x2f4b88: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f4b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f4b8c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f4b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f4b90: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f4b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f4b94: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f4b94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f4b98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4b9c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f4b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4ba0: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f4ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f4ba4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f4ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f4ba8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f4ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f4bac: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f4bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f4bb0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f4bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f4bb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4bb8: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f4bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f4bbc: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f4bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f4bc0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f4bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f4bc4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f4bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f4bc8: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f4bc8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f4bcc: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2f4bccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4bd0: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x2f4bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2f4bd4: 0x93a20078  lbu         $v0, 0x78($sp)
    ctx->pc = 0x2f4bd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2f4bd8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f4bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4bdc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2f4bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f4be0: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x2f4be0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x2f4be4: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x2f4be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x2f4be8: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x2f4be8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2f4bec: 0x0  nop
    ctx->pc = 0x2f4becu;
    // NOP
    // 0x2f4bf0: 0x0  nop
    ctx->pc = 0x2f4bf0u;
    // NOP
    // 0x2f4bf4: 0x1010  mfhi        $v0
    ctx->pc = 0x2f4bf4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2f4bf8: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x2F4BF8u;
    {
        const bool branch_taken_0x2f4bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f4bf8) {
            ctx->pc = 0x2F4D04u;
            return;
        }
    }
    ctx->pc = 0x2F4C00u;
    // 0x2f4c00: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F4C00u;
    SET_GPR_U32(ctx, 31, 0x2F4C08u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F4C00u, 0x2F4C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4C08u;
label_2f4c08:
    // 0x2f4c08: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2f4c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2f4c0c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f4c0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f4c10: 0x0  nop
    ctx->pc = 0x2f4c10u;
    // NOP
    // 0x2f4c14: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f4c14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f4c18: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2f4c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2f4c1c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F4C1Cu;
    SET_GPR_U32(ctx, 31, 0x2F4C24u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F4C1Cu, 0x2F4C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4C24u;
label_2f4c24:
    // 0x2f4c24: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2f4c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2f4c28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f4c28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f4c2c: 0x0  nop
    ctx->pc = 0x2f4c2cu;
    // NOP
    // 0x2f4c30: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f4c30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f4c34: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2f4c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2f4c38: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F4C38u;
    SET_GPR_U32(ctx, 31, 0x2F4C40u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F4C38u, 0x2F4C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4C40u;
label_2f4c40:
    // 0x2f4c40: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2f4c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2f4c44: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f4c44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f4c48: 0x0  nop
    ctx->pc = 0x2f4c48u;
    // NOP
    // 0x2f4c4c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f4c4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f4c50: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2f4c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2f4c54: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F4C54u;
    SET_GPR_U32(ctx, 31, 0x2F4C5Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F4C54u, 0x2F4C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4C5Cu;
label_2f4c5c:
    // 0x2f4c5c: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2f4c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2f4c60: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f4c60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f4c64: 0x0  nop
    ctx->pc = 0x2f4c64u;
    // NOP
    // 0x2f4c68: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f4c68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f4c6c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2f4c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2f4c70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f4c70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f4c74: 0x0  nop
    ctx->pc = 0x2f4c74u;
    // NOP
    // 0x2f4c78: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2f4c78u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f4c7c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f4c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f4c80: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f4c80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f4c84: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f4c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f4c88: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f4c88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f4c8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4c90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f4c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4c94: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f4c94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f4c98: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f4c98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f4c9c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f4c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f4ca0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f4ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f4ca4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f4ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f4ca8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4cac: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f4cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f4cb0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f4cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f4cb4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f4cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f4cb8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f4cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f4cbc: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f4cbcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f4cc0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f4cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4cc4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2f4cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2f4cc8: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2f4cc8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2f4ccc: 0x0  nop
    ctx->pc = 0x2f4cccu;
    // NOP
    // 0x2f4cd0: 0x0  nop
    ctx->pc = 0x2f4cd0u;
    // NOP
    // 0x2f4cd4: 0x1810  mfhi        $v1
    ctx->pc = 0x2f4cd4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2f4cd8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f4cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f4cdc: 0x24428f10  addiu       $v0, $v0, -0x70F0
    ctx->pc = 0x2f4cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938384));
    // 0x2f4ce0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4ce4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2f4ce4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f4ce8: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x2f4ce8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4cec: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f4cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f4cf0: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x2f4cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f4cf4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2f4cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f4cf8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2f4cf8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f4cfc: 0xc0bd36c  jal         func_2F4DB0
    ctx->pc = 0x2F4CFCu;
    SET_GPR_U32(ctx, 31, 0x2F4D04u);
    ctx->pc = 0x2F4DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4DB0u, 0x2F4CFCu, 0x2F4D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4D04u;
}
