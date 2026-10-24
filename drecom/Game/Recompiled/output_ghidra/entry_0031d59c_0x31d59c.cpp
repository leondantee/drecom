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

// Function: entry_0031d59c
// Address: 0x31d59c - 0x31d64c
void entry_0031d59c_0x31d59c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031d59c_0x31d59c");
#endif

    switch (ctx->pc) {
        case 0x31d608u: goto label_31d608;
        case 0x31d614u: goto label_31d614;
        default: break;
    }

    ctx->pc = 0x31d59cu;

    // 0x31d59c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31d59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d5a0: 0x8c621290  lw          $v0, 0x1290($v1)
    ctx->pc = 0x31d5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4752)));
    // 0x31d5a4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x31d5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x31d5a8: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x31D5A8u;
    {
        const bool branch_taken_0x31d5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d5a8) {
            ctx->pc = 0x31D64Cu;
            return;
        }
    }
    ctx->pc = 0x31D5B0u;
    // 0x31d5b0: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31d5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d5b4: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x31d5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31d5b8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d5bc: 0xc4401304  lwc1        $f0, 0x1304($v0)
    ctx->pc = 0x31d5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31d5c0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x31d5c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31d5c4: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x31d5c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x31d5c8: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x31d5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31d5cc: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x31d5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
    // 0x31d5d0: 0x34628000  ori         $v0, $v1, 0x8000
    ctx->pc = 0x31d5d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x31d5d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31d5d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d5d8: 0x0  nop
    ctx->pc = 0x31d5d8u;
    // NOP
    // 0x31d5dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31d5dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31d5e0: 0x0  nop
    ctx->pc = 0x31d5e0u;
    // NOP
    // 0x31d5e4: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x31D5E4u;
    {
        const bool branch_taken_0x31d5e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31d5e4) {
            ctx->pc = 0x31D64Cu;
            return;
        }
    }
    ctx->pc = 0x31D5ECu;
    // 0x31d5ec: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d5f0: 0x24044b00  addiu       $a0, $zero, 0x4B00
    ctx->pc = 0x31d5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19200));
    // 0x31d5f4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31d5f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31d5f8: 0x24461300  addiu       $a2, $v0, 0x1300
    ctx->pc = 0x31d5f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
    // 0x31d5fc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x31d5fcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31d600: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31D600u;
    SET_GPR_U32(ctx, 31, 0x31D608u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31D600u, 0x31D608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D608u;
label_31d608:
    // 0x31d608: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31d608u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31d60c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31D60Cu;
    SET_GPR_U32(ctx, 31, 0x31D614u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31D60Cu, 0x31D614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D614u;
label_31d614:
    // 0x31d614: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x31d614u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31d618: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x31d618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x31d61c: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x31d61cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x31d620: 0x1243000a  beq         $s2, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x31D620u;
    {
        const bool branch_taken_0x31d620 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x31d620) {
            ctx->pc = 0x31D64Cu;
            return;
        }
    }
    ctx->pc = 0x31D628u;
    // 0x31d628: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x31d628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x31d62c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x31d62cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31d630: 0x3c02399d  lui         $v0, 0x399D
    ctx->pc = 0x31d630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14749 << 16));
    // 0x31d634: 0x34424952  ori         $v0, $v0, 0x4952
    ctx->pc = 0x31d634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18770);
    // 0x31d638: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31d638u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31d63c: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x31d63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31d640: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x31d640u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31d644: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x31d644u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x31d648: 0xe6400104  swc1        $f0, 0x104($s2)
    ctx->pc = 0x31d648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
    ctx->pc = 0x31d64cu;
}
