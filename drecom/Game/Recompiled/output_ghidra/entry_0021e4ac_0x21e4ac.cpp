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

// Function: entry_0021e4ac
// Address: 0x21e4ac - 0x21e5d8
void entry_0021e4ac_0x21e4ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021e4ac_0x21e4ac");
#endif

    switch (ctx->pc) {
        case 0x21e4f0u: goto label_21e4f0;
        default: break;
    }

    ctx->pc = 0x21e4acu;

    // 0x21e4ac: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e4b0: 0x8c640124  lw          $a0, 0x124($v1)
    ctx->pc = 0x21e4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 292)));
    // 0x21e4b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21e4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21e4b8: 0x1483011d  bne         $a0, $v1, . + 4 + (0x11D << 2)
    ctx->pc = 0x21E4B8u;
    {
        const bool branch_taken_0x21e4b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x21e4b8) {
            ctx->pc = 0x21E930u;
            return;
        }
    }
    ctx->pc = 0x21E4C0u;
    // 0x21e4c0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e4c4: 0x8c63012c  lw          $v1, 0x12C($v1)
    ctx->pc = 0x21e4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 300)));
    // 0x21e4c8: 0x14600112  bnez        $v1, . + 4 + (0x112 << 2)
    ctx->pc = 0x21E4C8u;
    {
        const bool branch_taken_0x21e4c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e4c8) {
            ctx->pc = 0x21E914u;
            return;
        }
    }
    ctx->pc = 0x21E4D0u;
    // 0x21e4d0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e4d4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x21e4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e4d8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x21e4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x21e4dc: 0x246500c0  addiu       $a1, $v1, 0xC0
    ctx->pc = 0x21e4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x21e4e0: 0x244600b0  addiu       $a2, $v0, 0xB0
    ctx->pc = 0x21e4e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x21e4e4: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x21e4e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x21e4e8: 0xc059e1c  jal         func_167870
    ctx->pc = 0x21E4E8u;
    SET_GPR_U32(ctx, 31, 0x21E4F0u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x21E4E8u, 0x21E4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E4F0u;
label_21e4f0:
    // 0x21e4f0: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x21e4f0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21e4f4: 0x12400080  beqz        $s2, . + 4 + (0x80 << 2)
    ctx->pc = 0x21E4F4u;
    {
        const bool branch_taken_0x21e4f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e4f4) {
            ctx->pc = 0x21E6F8u;
            return;
        }
    }
    ctx->pc = 0x21E4FCu;
    // 0x21e4fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21e4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21e500: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x21e500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e504: 0xac43012c  sw          $v1, 0x12C($v0)
    ctx->pc = 0x21e504u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 300), GPR_U32(ctx, 3));
    // 0x21e508: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x21e508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e50c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x21e50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e510: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x21e510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x21e514: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x21e514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e518: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x21e518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e51c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x21e51cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x21e520: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x21e520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e524: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x21e524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e528: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x21e528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x21e52c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x21e52cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x21e530: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21e530u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e534: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x21e534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e538: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x21e538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x21e53c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x21e53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e540: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x21e540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e544: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x21e544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x21e548: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x21e548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x21e54c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21e54cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e550: 0x0  nop
    ctx->pc = 0x21e550u;
    // NOP
    // 0x21e554: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x21e554u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21e558: 0x0  nop
    ctx->pc = 0x21e558u;
    // NOP
    // 0x21e55c: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x21E55Cu;
    {
        const bool branch_taken_0x21e55c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21e55c) {
            ctx->pc = 0x21E5D8u;
            return;
        }
    }
    ctx->pc = 0x21E564u;
    // 0x21e564: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e568: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x21e568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x21e56c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21e56cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21e570: 0xc4600050  lwc1        $f0, 0x50($v1)
    ctx->pc = 0x21e570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e574: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21e574u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21e578: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x21e578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e57c: 0xc44000b0  lwc1        $f0, 0xB0($v0)
    ctx->pc = 0x21e57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e580: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x21e580u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21e584: 0xe44000b0  swc1        $f0, 0xB0($v0)
    ctx->pc = 0x21e584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
    // 0x21e588: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e58c: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x21e58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x21e590: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21e590u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21e594: 0xc4600054  lwc1        $f0, 0x54($v1)
    ctx->pc = 0x21e594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e598: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21e598u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21e59c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x21e59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e5a0: 0xc44000b4  lwc1        $f0, 0xB4($v0)
    ctx->pc = 0x21e5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e5a4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x21e5a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21e5a8: 0xe44000b4  swc1        $f0, 0xB4($v0)
    ctx->pc = 0x21e5a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 180), bits); }
    // 0x21e5ac: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e5b0: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x21e5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x21e5b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21e5b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21e5b8: 0xc4600058  lwc1        $f0, 0x58($v1)
    ctx->pc = 0x21e5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e5bc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21e5bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21e5c0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x21e5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e5c4: 0xc44000b8  lwc1        $f0, 0xB8($v0)
    ctx->pc = 0x21e5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e5c8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x21e5c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21e5cc: 0xe44000b8  swc1        $f0, 0xB8($v0)
    ctx->pc = 0x21e5ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 184), bits); }
    // 0x21e5d0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x21E5D0u;
    {
        const bool branch_taken_0x21e5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e5d0) {
            ctx->pc = 0x21E644u;
            return;
        }
    }
    ctx->pc = 0x21E5D8u;
}
