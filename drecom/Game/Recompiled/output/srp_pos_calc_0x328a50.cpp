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

// Function: srp_pos_calc
// Address: 0x328a50 - 0x328c8c
void srp_pos_calc_0x328a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_pos_calc_0x328a50");
#endif

    switch (ctx->pc) {
        case 0x328a90u: goto label_328a90;
        case 0x328ac0u: goto label_328ac0;
        case 0x328b14u: goto label_328b14;
        case 0x328b30u: goto label_328b30;
        case 0x328b68u: goto label_328b68;
        case 0x328bb8u: goto label_328bb8;
        case 0x328bd4u: goto label_328bd4;
        case 0x328bfcu: goto label_328bfc;
        case 0x328c24u: goto label_328c24;
        default: break;
    }

    ctx->pc = 0x328a50u;

    // 0x328a50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x328a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x328a54: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x328a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x328a58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x328a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x328a5c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x328a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x328a60: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x328a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x328a64: 0x94420340  lhu         $v0, 0x340($v0)
    ctx->pc = 0x328a64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 832)));
    // 0x328a68: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x328a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x328a6c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x328a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x328a70: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x328A70u;
    {
        const bool branch_taken_0x328a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x328a70) {
            ctx->pc = 0x328AE4u;
            goto label_328ae4;
        }
    }
    ctx->pc = 0x328A78u;
    // 0x328a78: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x328a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x328a7c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x328a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x328a80: 0x246403c0  addiu       $a0, $v1, 0x3C0
    ctx->pc = 0x328a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 960));
    // 0x328a84: 0x8c450324  lw          $a1, 0x324($v0)
    ctx->pc = 0x328a84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 804)));
    // 0x328a88: 0xc040ca2  jal         func_103288
    ctx->pc = 0x328A88u;
    SET_GPR_U32(ctx, 31, 0x328A90u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x328A90u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x328A90u) { return; }
    ctx->pc = 0x328A90u;
label_328a90:
    // 0x328a90: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x328a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x328a94: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x328a94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x328a98: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x328a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x328a9c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x328a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x328aa0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x328aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x328aa4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x328aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x328aa8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x328aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x328aac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x328aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x328ab0: 0x246503c0  addiu       $a1, $v1, 0x3C0
    ctx->pc = 0x328ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 960));
    // 0x328ab4: 0x244602c0  addiu       $a2, $v0, 0x2C0
    ctx->pc = 0x328ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
    // 0x328ab8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x328AB8u;
    SET_GPR_U32(ctx, 31, 0x328AC0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x328AC0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x328AC0u) { return; }
    ctx->pc = 0x328AC0u;
label_328ac0:
    // 0x328ac0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x328ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x328ac4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x328ac4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x328ac8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x328ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x328acc: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x328accu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x328ad0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x328ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x328ad4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x328ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x328ad8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x328ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x328adc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x328adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x328ae0: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x328ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_328ae4:
    // 0x328ae4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x328ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x328ae8: 0x94420340  lhu         $v0, 0x340($v0)
    ctx->pc = 0x328ae8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 832)));
    // 0x328aec: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x328aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x328af0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x328af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x328af4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x328AF4u;
    {
        const bool branch_taken_0x328af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x328af4) {
            ctx->pc = 0x328B40u;
            goto label_328b40;
        }
    }
    ctx->pc = 0x328AFCu;
    // 0x328afc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x328afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x328b00: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x328b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x328b04: 0x24640380  addiu       $a0, $v1, 0x380
    ctx->pc = 0x328b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x328b08: 0x8c450320  lw          $a1, 0x320($v0)
    ctx->pc = 0x328b08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
    // 0x328b0c: 0xc040ca2  jal         func_103288
    ctx->pc = 0x328B0Cu;
    SET_GPR_U32(ctx, 31, 0x328B14u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x328B14u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x328B14u) { return; }
    ctx->pc = 0x328B14u;
label_328b14:
    // 0x328b14: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x328b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x328b18: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x328b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x328b1c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x328b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x328b20: 0x24650380  addiu       $a1, $v1, 0x380
    ctx->pc = 0x328b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x328b24: 0x244602b0  addiu       $a2, $v0, 0x2B0
    ctx->pc = 0x328b24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    // 0x328b28: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x328B28u;
    SET_GPR_U32(ctx, 31, 0x328B30u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x328B30u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x328B30u) { return; }
    ctx->pc = 0x328B30u;
label_328b30:
    // 0x328b30: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x328b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x328b34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x328b34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x328b38: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x328b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x328b3c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x328b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_328b40:
    // 0x328b40: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x328b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x328b44: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x328b44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x328b48: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x328b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x328b4c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x328b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x328b50: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x328b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x328b54: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x328b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x328b58: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x328b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x328b5c: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x328b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x328b60: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x328B60u;
    SET_GPR_U32(ctx, 31, 0x328B68u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x328B60u, 0x328B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328B68u;
label_328b68:
    // 0x328b68: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x328b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x328b6c: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x328b6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x328b70: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x328B70u;
    {
        const bool branch_taken_0x328b70 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x328b70) {
            ctx->pc = 0x328B8Cu;
            goto label_328b8c;
        }
    }
    ctx->pc = 0x328B78u;
    // 0x328b78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x328b78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x328b7c: 0x0  nop
    ctx->pc = 0x328b7cu;
    // NOP
    // 0x328b80: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x328b80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x328b84: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x328B84u;
    {
        const bool branch_taken_0x328b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x328b84) {
            ctx->pc = 0x328BA8u;
            goto label_328ba8;
        }
    }
    ctx->pc = 0x328B8Cu;
label_328b8c:
    // 0x328b8c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x328b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x328b90: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x328b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x328b94: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x328b94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x328b98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x328b98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x328b9c: 0x0  nop
    ctx->pc = 0x328b9cu;
    // NOP
    // 0x328ba0: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x328ba0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x328ba4: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x328ba4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_328ba8:
    // 0x328ba8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x328ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x328bac: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x328bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x328bb0: 0xc040c68  jal         func_1031A0
    ctx->pc = 0x328BB0u;
    SET_GPR_U32(ctx, 31, 0x328BB8u);
    ctx->pc = 0x1031A0u;
    {
        ctx->pc = 0x328BB8u;
        ps2_stubs::sceVu0DivVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x328BB8u) { return; }
    ctx->pc = 0x328BB8u;
label_328bb8:
    // 0x328bb8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x328bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x328bbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x328bbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x328bc0: 0x0  nop
    ctx->pc = 0x328bc0u;
    // NOP
    // 0x328bc4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x328bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x328bc8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x328bc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x328bcc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x328BCCu;
    {
        const bool branch_taken_0x328bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x328bcc) {
            ctx->pc = 0x328C00u;
            goto label_328c00;
        }
    }
    ctx->pc = 0x328BD4u;
label_328bd4:
    // 0x328bd4: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x328bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x328bd8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x328bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x328bdc: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x328bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x328be0: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x328be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x328be4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x328be4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x328be8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x328be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x328bec: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x328becu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x328bf0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x328bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x328bf4: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x328BF4u;
    SET_GPR_U32(ctx, 31, 0x328BFCu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x328BF4u, 0x328BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328BFCu;
label_328bfc:
    // 0x328bfc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x328bfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_328c00:
    // 0x328c00: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x328c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x328c04: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x328c04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x328c08: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x328c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x328c0c: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x328c0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x328c10: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x328C10u;
    {
        const bool branch_taken_0x328c10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x328c10) {
            ctx->pc = 0x328BD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_328bd4;
        }
    }
    ctx->pc = 0x328C18u;
    // 0x328c18: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x328c18u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x328c1c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x328C1Cu;
    {
        const bool branch_taken_0x328c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x328c1c) {
            ctx->pc = 0x328C60u;
            goto label_328c60;
        }
    }
    ctx->pc = 0x328C24u;
label_328c24:
    // 0x328c24: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x328c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x328c28: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x328c28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x328c2c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x328c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x328c30: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x328c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x328c34: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x328c34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x328c38: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x328c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x328c3c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x328c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x328c40: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x328c40u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x328c44: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x328c44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x328c48: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x328c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x328c4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x328c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x328c50: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x328c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x328c54: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x328c54u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x328c58: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x328c58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x328c5c: 0x0  nop
    ctx->pc = 0x328c5cu;
    // NOP
label_328c60:
    // 0x328c60: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x328c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x328c64: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x328c64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x328c68: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x328c68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x328c6c: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x328c6cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x328c70: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x328C70u;
    {
        const bool branch_taken_0x328c70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x328c70) {
            ctx->pc = 0x328C24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_328c24;
        }
    }
    ctx->pc = 0x328C78u;
    // 0x328c78: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x328c78u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x328c7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x328c7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328c80: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x328c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x328c84: 0x3e00008  jr          $ra
    ctx->pc = 0x328C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328C84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328C8Cu;
}
