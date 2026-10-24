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

// Function: entry_0026d450
// Address: 0x26d450 - 0x26d61c
void entry_0026d450_0x26d450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026d450_0x26d450");
#endif

    switch (ctx->pc) {
        case 0x26d478u: goto label_26d478;
        case 0x26d4c4u: goto label_26d4c4;
        case 0x26d4d0u: goto label_26d4d0;
        case 0x26d514u: goto label_26d514;
        case 0x26d528u: goto label_26d528;
        case 0x26d564u: goto label_26d564;
        case 0x26d574u: goto label_26d574;
        case 0x26d5b0u: goto label_26d5b0;
        case 0x26d5bcu: goto label_26d5bc;
        default: break;
    }

    ctx->pc = 0x26d450u;

    // 0x26d450: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26d450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26d454: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x26d454u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x26d458: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x26d458u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x26d45c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x26d45cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x26d460: 0x30a30003  andi        $v1, $a1, 0x3
    ctx->pc = 0x26d460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x26d464: 0x1460006d  bnez        $v1, . + 4 + (0x6D << 2)
    ctx->pc = 0x26D464u;
    {
        const bool branch_taken_0x26d464 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d464) {
            ctx->pc = 0x26D61Cu;
            return;
        }
    }
    ctx->pc = 0x26D46Cu;
    // 0x26d46c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x26d46cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26d470: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x26D470u;
    SET_GPR_U32(ctx, 31, 0x26D478u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26D470u, 0x26D478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D478u;
label_26d478:
    // 0x26d478: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x26d478u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26d47c: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x26d47cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x26d480: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26d480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26d484: 0x0  nop
    ctx->pc = 0x26d484u;
    // NOP
    // 0x26d488: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x26d488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x26d48c: 0x3c054248  lui         $a1, 0x4248
    ctx->pc = 0x26d48cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16968 << 16));
    // 0x26d490: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x26d490u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x26d494: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x26d494u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26d498: 0x3c0742c8  lui         $a3, 0x42C8
    ctx->pc = 0x26d498u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17096 << 16));
    // 0x26d49c: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x26d49cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26d4a0: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x26d4a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x26d4a4: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x26d4a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x26d4a8: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x26d4a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x26d4ac: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x26d4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26d4b0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x26d4b0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26d4b4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x26d4b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26d4b8: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x26d4b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26d4bc: 0xc0bbfe4  jal         func_2EFF90
    ctx->pc = 0x26D4BCu;
    SET_GPR_U32(ctx, 31, 0x26D4C4u);
    ctx->pc = 0x2EFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFF90u, 0x26D4BCu, 0x26D4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D4C4u;
label_26d4c4:
    // 0x26d4c4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x26d4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26d4c8: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x26D4C8u;
    SET_GPR_U32(ctx, 31, 0x26D4D0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26D4C8u, 0x26D4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D4D0u;
label_26d4d0:
    // 0x26d4d0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x26d4d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26d4d4: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x26d4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x26d4d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26d4d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26d4dc: 0x0  nop
    ctx->pc = 0x26d4dcu;
    // NOP
    // 0x26d4e0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x26d4e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x26d4e4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26d4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26d4e8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x26d4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x26d4ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26d4ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26d4f0: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x26d4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x26d4f4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x26d4f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x26d4f8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x26d4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x26d4fc: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x26d4fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26d500: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x26d500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26d504: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x26d504u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26d508: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x26d508u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26d50c: 0xc0bbfe4  jal         func_2EFF90
    ctx->pc = 0x26D50Cu;
    SET_GPR_U32(ctx, 31, 0x26D514u);
    ctx->pc = 0x2EFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFF90u, 0x26D50Cu, 0x26D514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D514u;
label_26d514:
    // 0x26d514: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x26d514u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26d518: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x26d518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26d51c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x26d51cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26d520: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x26D520u;
    SET_GPR_U32(ctx, 31, 0x26D528u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26D520u, 0x26D528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D528u;
label_26d528:
    // 0x26d528: 0x3c03c348  lui         $v1, 0xC348
    ctx->pc = 0x26d528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49992 << 16));
    // 0x26d52c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26d52cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26d530: 0x0  nop
    ctx->pc = 0x26d530u;
    // NOP
    // 0x26d534: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x26d534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x26d538: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26d538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26d53c: 0x3c0542c8  lui         $a1, 0x42C8
    ctx->pc = 0x26d53cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17096 << 16));
    // 0x26d540: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x26d540u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26d544: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x26d544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x26d548: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x26d548u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x26d54c: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x26d54cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x26d550: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x26d550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26d554: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x26d554u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26d558: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x26d558u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26d55c: 0xc0bbfe4  jal         func_2EFF90
    ctx->pc = 0x26D55Cu;
    SET_GPR_U32(ctx, 31, 0x26D564u);
    ctx->pc = 0x2EFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFF90u, 0x26D55Cu, 0x26D564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D564u;
label_26d564:
    // 0x26d564: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x26d564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26d568: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x26d568u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26d56c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x26D56Cu;
    SET_GPR_U32(ctx, 31, 0x26D574u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26D56Cu, 0x26D574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D574u;
label_26d574:
    // 0x26d574: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x26d574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x26d578: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26d578u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26d57c: 0x0  nop
    ctx->pc = 0x26d57cu;
    // NOP
    // 0x26d580: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x26d580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x26d584: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x26d584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x26d588: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x26d588u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26d58c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x26d58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x26d590: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x26d590u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x26d594: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26d594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26d598: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x26d598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x26d59c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x26d59cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26d5a0: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x26d5a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26d5a4: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x26d5a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26d5a8: 0xc0bbfe4  jal         func_2EFF90
    ctx->pc = 0x26D5A8u;
    SET_GPR_U32(ctx, 31, 0x26D5B0u);
    ctx->pc = 0x2EFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFF90u, 0x26D5A8u, 0x26D5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D5B0u;
label_26d5b0:
    // 0x26d5b0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x26d5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26d5b4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x26D5B4u;
    SET_GPR_U32(ctx, 31, 0x26D5BCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26D5B4u, 0x26D5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D5BCu;
label_26d5bc:
    // 0x26d5bc: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x26d5bcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26d5c0: 0x3c074248  lui         $a3, 0x4248
    ctx->pc = 0x26d5c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16968 << 16));
    // 0x26d5c4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x26d5c4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26d5c8: 0x0  nop
    ctx->pc = 0x26d5c8u;
    // NOP
    // 0x26d5cc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x26d5ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x26d5d0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x26d5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x26d5d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26d5d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26d5d8: 0x0  nop
    ctx->pc = 0x26d5d8u;
    // NOP
    // 0x26d5dc: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x26d5dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x26d5e0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26d5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26d5e4: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x26d5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x26d5e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26d5e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26d5ec: 0x3c054248  lui         $a1, 0x4248
    ctx->pc = 0x26d5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16968 << 16));
    // 0x26d5f0: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x26d5f0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x26d5f4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x26d5f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26d5f8: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x26d5f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x26d5fc: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x26d5fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26d600: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x26d600u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x26d604: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x26d604u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26d608: 0x71003e28  paddub      $a3, $t0, $zero
    ctx->pc = 0x26d608u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x26d60c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x26d60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26d610: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x26d610u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26d614: 0xc0bbfe4  jal         func_2EFF90
    ctx->pc = 0x26D614u;
    SET_GPR_U32(ctx, 31, 0x26D61Cu);
    ctx->pc = 0x2EFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFF90u, 0x26D614u, 0x26D61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D61Cu;
}
