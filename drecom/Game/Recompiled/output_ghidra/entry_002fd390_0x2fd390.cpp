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

// Function: entry_002fd390
// Address: 0x2fd390 - 0x2fd47c
void entry_002fd390_0x2fd390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fd390_0x2fd390");
#endif

    switch (ctx->pc) {
        case 0x2fd3e0u: goto label_2fd3e0;
        case 0x2fd404u: goto label_2fd404;
        case 0x2fd420u: goto label_2fd420;
        default: break;
    }

    ctx->pc = 0x2fd390u;

    // 0x2fd390: 0x1600ffc3  bnez        $s0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x2FD390u;
    {
        const bool branch_taken_0x2fd390 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fd390) {
            ctx->pc = 0x2FD2A0u;
            return;
        }
    }
    ctx->pc = 0x2FD398u;
    // 0x2fd398: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2fd398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2fd39c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x2fd39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2fd3a0: 0x14600036  bnez        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x2FD3A0u;
    {
        const bool branch_taken_0x2fd3a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fd3a0) {
            ctx->pc = 0x2FD47Cu;
            return;
        }
    }
    ctx->pc = 0x2FD3A8u;
    // 0x2fd3a8: 0x13163c  dsll32      $v0, $s3, 24
    ctx->pc = 0x2fd3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 24));
    // 0x2fd3ac: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2fd3acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2fd3b0: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x2fd3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x2fd3b4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2fd3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2fd3b8: 0x24421610  addiu       $v0, $v0, 0x1610
    ctx->pc = 0x2fd3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5648));
    // 0x2fd3bc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2fd3bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fd3c0: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x2fd3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd3c4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2fd3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2fd3c8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2fd3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2fd3cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2fd3ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fd3d0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2fd3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd3d4: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2fd3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd3d8: 0xc040c8c  jal         func_103230
    ctx->pc = 0x2FD3D8u;
    SET_GPR_U32(ctx, 31, 0x2FD3E0u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x2FD3E0u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2FD3E0u) { return; }
    ctx->pc = 0x2FD3E0u;
label_2fd3e0:
    // 0x2fd3e0: 0x13163c  dsll32      $v0, $s3, 24
    ctx->pc = 0x2fd3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 24));
    // 0x2fd3e4: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2fd3e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2fd3e8: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x2fd3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x2fd3ec: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2fd3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2fd3f0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2fd3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd3f4: 0x24451600  addiu       $a1, $v0, 0x1600
    ctx->pc = 0x2fd3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x2fd3f8: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2fd3f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd3fc: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2FD3FCu;
    SET_GPR_U32(ctx, 31, 0x2FD404u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2FD3FCu, 0x2FD404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD404u;
label_2fd404:
    // 0x2fd404: 0x3c023eaa  lui         $v0, 0x3EAA
    ctx->pc = 0x2fd404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16042 << 16));
    // 0x2fd408: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x2fd408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x2fd40c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2fd40cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fd410: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2fd410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd414: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2fd414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd418: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x2FD418u;
    SET_GPR_U32(ctx, 31, 0x2FD420u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x2FD420u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2FD420u) { return; }
    ctx->pc = 0x2FD420u;
label_2fd420:
    // 0x2fd420: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2fd420u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2fd424: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fd424u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fd428: 0x0  nop
    ctx->pc = 0x2fd428u;
    // NOP
    // 0x2fd42c: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x2fd42cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x2fd430: 0x131e3c  dsll32      $v1, $s3, 24
    ctx->pc = 0x2fd430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 24));
    // 0x2fd434: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2fd434u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2fd438: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x2fd438u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x2fd43c: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x2fd43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2fd440: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2fd440u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2fd444: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2fd444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2fd448: 0x24631600  addiu       $v1, $v1, 0x1600
    ctx->pc = 0x2fd448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5632));
    // 0x2fd44c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2fd44cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fd450: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2fd450u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2fd454: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2fd454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2fd458: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2fd458u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x2fd45c: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x2fd45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd460: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2fd460u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fd464: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x2fd464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2fd468: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2fd468u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fd46c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2fd46cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2fd470: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2fd470u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x2fd474: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x2FD474u;
    {
        const bool branch_taken_0x2fd474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fd474) {
            ctx->pc = 0x2FD6D4u;
            return;
        }
    }
    ctx->pc = 0x2FD47Cu;
}
