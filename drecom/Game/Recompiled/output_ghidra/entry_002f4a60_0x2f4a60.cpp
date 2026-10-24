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

// Function: entry_002f4a60
// Address: 0x2f4a60 - 0x2f4b88
void entry_002f4a60_0x2f4a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f4a60_0x2f4a60");
#endif

    ctx->pc = 0x2f4a60u;

    // 0x2f4a60: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f4a60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f4a64: 0x46020340  add.s       $f13, $f0, $f2
    ctx->pc = 0x2f4a64u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2f4a68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f4a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f4a6c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2f4a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2f4a70: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f4a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f4a74: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f4a74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f4a78: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f4a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f4a7c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f4a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f4a80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4a84: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f4a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4a88: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f4a88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f4a8c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f4a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f4a90: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f4a90u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f4a94: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f4a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f4a98: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f4a98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f4a9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4aa0: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f4aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f4aa4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f4aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f4aa8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f4aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f4aac: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f4aacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f4ab0: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f4ab0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f4ab4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f4ab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4ab8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2f4ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2f4abc: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2f4abcu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2f4ac0: 0x0  nop
    ctx->pc = 0x2f4ac0u;
    // NOP
    // 0x2f4ac4: 0x0  nop
    ctx->pc = 0x2f4ac4u;
    // NOP
    // 0x2f4ac8: 0x1810  mfhi        $v1
    ctx->pc = 0x2f4ac8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2f4acc: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f4accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f4ad0: 0x24428f10  addiu       $v0, $v0, -0x70F0
    ctx->pc = 0x2f4ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938384));
    // 0x2f4ad4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4ad8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2f4ad8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f4adc: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x2f4adcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4ae0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f4ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f4ae4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f4ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f4ae8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f4ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f4aec: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f4aecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f4af0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4af4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f4af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4af8: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f4af8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f4afc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f4afcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f4b00: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f4b00u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f4b04: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f4b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f4b08: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f4b08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f4b0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4b10: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f4b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f4b14: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f4b14u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f4b18: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f4b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f4b1c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f4b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f4b20: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f4b20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f4b24: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f4b24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4b28: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2f4b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2f4b2c: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2f4b2cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2f4b30: 0x0  nop
    ctx->pc = 0x2f4b30u;
    // NOP
    // 0x2f4b34: 0x0  nop
    ctx->pc = 0x2f4b34u;
    // NOP
    // 0x2f4b38: 0x1810  mfhi        $v1
    ctx->pc = 0x2f4b38u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2f4b3c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f4b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f4b40: 0x24428f10  addiu       $v0, $v0, -0x70F0
    ctx->pc = 0x2f4b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938384));
    // 0x2f4b44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4b48: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2f4b48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f4b4c: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x2f4b4cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4b50: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2f4b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2f4b54: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f4b54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f4b58: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2f4b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2f4b5c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f4b5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f4b60: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f4b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f4b64: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x2f4b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f4b68: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2f4b68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f4b6c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f4b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f4b70: 0x2447dbc0  addiu       $a3, $v0, -0x2440
    ctx->pc = 0x2f4b70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f4b74: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x2f4b74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f4b78: 0x27aa0040  addiu       $t2, $sp, 0x40
    ctx->pc = 0x2f4b78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f4b7c: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f4b7cu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f4b80: 0xc0bbdc4  jal         func_2EF710
    ctx->pc = 0x2F4B80u;
    SET_GPR_U32(ctx, 31, 0x2F4B88u);
    ctx->pc = 0x2EF710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF710u, 0x2F4B80u, 0x2F4B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4B88u;
}
