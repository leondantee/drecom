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

// Function: entry_002f3b2c
// Address: 0x2f3b2c - 0x2f3cb0
void entry_002f3b2c_0x2f3b2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f3b2c_0x2f3b2c");
#endif

    switch (ctx->pc) {
        case 0x2f3b98u: goto label_2f3b98;
        default: break;
    }

    ctx->pc = 0x2f3b2cu;

    // 0x2f3b2c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f3b2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f3b30: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f3b30u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f3b34: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f3b34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f3b38: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f3b38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f3b3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f3b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f3b40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f3b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f3b44: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f3b44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f3b48: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f3b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f3b4c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f3b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f3b50: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f3b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f3b54: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f3b54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f3b58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f3b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f3b5c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f3b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f3b60: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f3b60u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f3b64: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f3b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f3b68: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f3b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f3b6c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f3b6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f3b70: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f3b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f3b74: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2f3b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2f3b78: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2f3b78u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2f3b7c: 0x0  nop
    ctx->pc = 0x2f3b7cu;
    // NOP
    // 0x2f3b80: 0x0  nop
    ctx->pc = 0x2f3b80u;
    // NOP
    // 0x2f3b84: 0x1010  mfhi        $v0
    ctx->pc = 0x2f3b84u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2f3b88: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x2F3B88u;
    {
        const bool branch_taken_0x2f3b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f3b88) {
            ctx->pc = 0x2F3CB0u;
            return;
        }
    }
    ctx->pc = 0x2F3B90u;
    // 0x2f3b90: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F3B90u;
    SET_GPR_U32(ctx, 31, 0x2F3B98u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F3B90u, 0x2F3B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3B98u;
label_2f3b98:
    // 0x2f3b98: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2f3b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2f3b9c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f3b9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f3ba0: 0x0  nop
    ctx->pc = 0x2f3ba0u;
    // NOP
    // 0x2f3ba4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f3ba4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f3ba8: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2f3ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2f3bac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f3bacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f3bb0: 0x0  nop
    ctx->pc = 0x2f3bb0u;
    // NOP
    // 0x2f3bb4: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f3bb4u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f3bb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f3bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3bbc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2f3bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2f3bc0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f3bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f3bc4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f3bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f3bc8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f3bc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f3bcc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f3bccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f3bd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f3bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f3bd4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f3bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f3bd8: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f3bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f3bdc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f3bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f3be0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f3be0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f3be4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f3be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f3be8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f3be8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f3bec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f3becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f3bf0: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f3bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f3bf4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f3bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f3bf8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f3bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f3bfc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f3bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f3c00: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f3c00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f3c04: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f3c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f3c08: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x2f3c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2f3c0c: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2f3c0cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2f3c10: 0x0  nop
    ctx->pc = 0x2f3c10u;
    // NOP
    // 0x2f3c14: 0x0  nop
    ctx->pc = 0x2f3c14u;
    // NOP
    // 0x2f3c18: 0x2810  mfhi        $a1
    ctx->pc = 0x2f3c18u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2f3c1c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f3c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f3c20: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f3c20u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f3c24: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f3c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f3c28: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f3c28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f3c2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f3c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f3c30: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f3c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f3c34: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f3c34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f3c38: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f3c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f3c3c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f3c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f3c40: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f3c40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f3c44: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f3c44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f3c48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f3c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f3c4c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f3c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f3c50: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f3c50u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f3c54: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f3c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f3c58: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f3c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f3c5c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f3c5cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f3c60: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f3c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f3c64: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x2f3c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2f3c68: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2f3c68u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2f3c6c: 0x0  nop
    ctx->pc = 0x2f3c6cu;
    // NOP
    // 0x2f3c70: 0x0  nop
    ctx->pc = 0x2f3c70u;
    // NOP
    // 0x2f3c74: 0x4010  mfhi        $t0
    ctx->pc = 0x2f3c74u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x2f3c78: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2f3c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2f3c7c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f3c7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f3c80: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2f3c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2f3c84: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f3c84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f3c88: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f3c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f3c8c: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x2f3c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f3c90: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2f3c90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f3c94: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f3c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f3c98: 0x2447dbc0  addiu       $a3, $v0, -0x2440
    ctx->pc = 0x2f3c98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f3c9c: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x2f3c9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f3ca0: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x2f3ca0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f3ca4: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f3ca4u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f3ca8: 0xc0bbdc4  jal         func_2EF710
    ctx->pc = 0x2F3CA8u;
    SET_GPR_U32(ctx, 31, 0x2F3CB0u);
    ctx->pc = 0x2EF710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF710u, 0x2F3CA8u, 0x2F3CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3CB0u;
}
