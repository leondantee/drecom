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

// Function: entry_003474c4
// Address: 0x3474c4 - 0x3475b0
void entry_003474c4_0x3474c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003474c4_0x3474c4");
#endif

    switch (ctx->pc) {
        case 0x3474d4u: goto label_3474d4;
        case 0x3474e4u: goto label_3474e4;
        case 0x3474f4u: goto label_3474f4;
        case 0x347500u: goto label_347500;
        default: break;
    }

    ctx->pc = 0x3474c4u;

    // 0x3474c4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x3474c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3474c8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3474c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3474cc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3474CCu;
    SET_GPR_U32(ctx, 31, 0x3474D4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3474CCu, 0x3474D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3474D4u;
label_3474d4:
    // 0x3474d4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3474d4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3474d8: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x3474d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3474dc: 0xc05cd10  jal         func_173440
    ctx->pc = 0x3474DCu;
    SET_GPR_U32(ctx, 31, 0x3474E4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x3474DCu, 0x3474E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3474E4u;
label_3474e4:
    // 0x3474e4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x3474e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3474e8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3474e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3474ec: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x3474ECu;
    SET_GPR_U32(ctx, 31, 0x3474F4u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x3474ECu, 0x3474F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3474F4u;
label_3474f4:
    // 0x3474f4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x3474f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3474f8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x3474F8u;
    SET_GPR_U32(ctx, 31, 0x347500u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x3474F8u, 0x347500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347500u;
label_347500:
    // 0x347500: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x347500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347504: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x347504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x347508: 0x24723840  addiu       $s2, $v1, 0x3840
    ctx->pc = 0x347508u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 14400));
    // 0x34750c: 0xc6410128  lwc1        $f1, 0x128($s2)
    ctx->pc = 0x34750cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x347510: 0x3c033ccc  lui         $v1, 0x3CCC
    ctx->pc = 0x347510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15564 << 16));
    // 0x347514: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x347514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x347518: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x347518u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34751c: 0x0  nop
    ctx->pc = 0x34751cu;
    // NOP
    // 0x347520: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x347520u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x347524: 0xe6400128  swc1        $f0, 0x128($s2)
    ctx->pc = 0x347524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 296), bits); }
    // 0x347528: 0xc641012c  lwc1        $f1, 0x12C($s2)
    ctx->pc = 0x347528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34752c: 0x3c033ccc  lui         $v1, 0x3CCC
    ctx->pc = 0x34752cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15564 << 16));
    // 0x347530: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x347530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x347534: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x347534u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347538: 0x0  nop
    ctx->pc = 0x347538u;
    // NOP
    // 0x34753c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x34753cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x347540: 0xe640012c  swc1        $f0, 0x12C($s2)
    ctx->pc = 0x347540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 300), bits); }
    // 0x347544: 0xc6410130  lwc1        $f1, 0x130($s2)
    ctx->pc = 0x347544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x347548: 0x3c033ccc  lui         $v1, 0x3CCC
    ctx->pc = 0x347548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15564 << 16));
    // 0x34754c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x34754cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x347550: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x347550u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347554: 0x0  nop
    ctx->pc = 0x347554u;
    // NOP
    // 0x347558: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x347558u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34755c: 0xe6400130  swc1        $f0, 0x130($s2)
    ctx->pc = 0x34755cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 304), bits); }
    // 0x347560: 0xc6410128  lwc1        $f1, 0x128($s2)
    ctx->pc = 0x347560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x347564: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x347564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x347568: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x347568u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34756c: 0x0  nop
    ctx->pc = 0x34756cu;
    // NOP
    // 0x347570: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x347570u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x347574: 0x0  nop
    ctx->pc = 0x347574u;
    // NOP
    // 0x347578: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x347578u;
    {
        const bool branch_taken_0x347578 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x347578) {
            ctx->pc = 0x3475B0u;
            return;
        }
    }
    ctx->pc = 0x347580u;
    // 0x347580: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x347580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x347584: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x347584u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347588: 0x0  nop
    ctx->pc = 0x347588u;
    // NOP
    // 0x34758c: 0xe6400128  swc1        $f0, 0x128($s2)
    ctx->pc = 0x34758cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 296), bits); }
    // 0x347590: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x347590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x347594: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x347594u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347598: 0x0  nop
    ctx->pc = 0x347598u;
    // NOP
    // 0x34759c: 0xe640012c  swc1        $f0, 0x12C($s2)
    ctx->pc = 0x34759cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 300), bits); }
    // 0x3475a0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3475a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3475a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3475a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3475a8: 0x0  nop
    ctx->pc = 0x3475a8u;
    // NOP
    // 0x3475ac: 0xe6400130  swc1        $f0, 0x130($s2)
    ctx->pc = 0x3475acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 304), bits); }
    ctx->pc = 0x3475b0u;
}
