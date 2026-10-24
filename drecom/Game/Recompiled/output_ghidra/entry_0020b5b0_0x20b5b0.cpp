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

// Function: entry_0020b5b0
// Address: 0x20b5b0 - 0x20b668
void entry_0020b5b0_0x20b5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020b5b0_0x20b5b0");
#endif

    switch (ctx->pc) {
        case 0x20b5b8u: goto label_20b5b8;
        case 0x20b5d4u: goto label_20b5d4;
        default: break;
    }

    ctx->pc = 0x20b5b0u;

    // 0x20b5b0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x20B5B0u;
    SET_GPR_U32(ctx, 31, 0x20B5B8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x20B5B0u, 0x20B5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B5B8u;
label_20b5b8:
    // 0x20b5b8: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x20b5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x20b5bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20b5bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20b5c0: 0x0  nop
    ctx->pc = 0x20b5c0u;
    // NOP
    // 0x20b5c4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x20b5c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20b5c8: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x20b5c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x20b5cc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x20B5CCu;
    SET_GPR_U32(ctx, 31, 0x20B5D4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x20B5CCu, 0x20B5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B5D4u;
label_20b5d4:
    // 0x20b5d4: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x20b5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x20b5d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20b5d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20b5dc: 0x0  nop
    ctx->pc = 0x20b5dcu;
    // NOP
    // 0x20b5e0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x20b5e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20b5e4: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x20b5e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x20b5e8: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x20b5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b5ec: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x20b5ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x20b5f0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x20b5f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x20b5f4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x20b5f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x20b5f8: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x20b5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x20b5fc: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x20B5FCu;
    {
        const bool branch_taken_0x20b5fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20b5fc) {
            ctx->pc = 0x20B668u;
            return;
        }
    }
    ctx->pc = 0x20B604u;
    // 0x20b604: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x20b604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x20b608: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20b608u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20b60c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x20b60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x20b610: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x20b610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x20b614: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x20b614u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x20b618: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20b618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x20b61c: 0x24439390  addiu       $v1, $v0, -0x6C70
    ctx->pc = 0x20b61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939536));
    // 0x20b620: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x20b620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20b624: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x20b624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20b628: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x20b628u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x20b62c: 0x3c140062  lui         $s4, 0x62
    ctx->pc = 0x20b62cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)98 << 16));
    // 0x20b630: 0x26829390  addiu       $v0, $s4, -0x6C70
    ctx->pc = 0x20b630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294939536));
    // 0x20b634: 0x434821  addu        $t1, $v0, $v1
    ctx->pc = 0x20b634u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20b638: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x20b638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x20b63c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x20b63cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x20b640: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x20b640u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20b644: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20b644u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20b648: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x20b648u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20b64c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x20b64cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20b650: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20b650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20b654: 0xc42d94c0  lwc1        $f13, -0x6B40($at)
    ctx->pc = 0x20b654u;
    { uint32_t bits = FAST_READ32(0x6194C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x20b658: 0x27aa00a0  addiu       $t2, $sp, 0xA0
    ctx->pc = 0x20b658u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x20b65c: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x20b65cu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20b660: 0xc0bb544  jal         func_2ED510
    ctx->pc = 0x20B660u;
    SET_GPR_U32(ctx, 31, 0x20B668u);
    ctx->pc = 0x2ED510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED510u, 0x20B660u, 0x20B668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B668u;
}
