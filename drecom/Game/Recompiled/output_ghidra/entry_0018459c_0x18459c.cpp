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

// Function: entry_0018459c
// Address: 0x18459c - 0x1846d0
void entry_0018459c_0x18459c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018459c_0x18459c");
#endif

    switch (ctx->pc) {
        case 0x1845c0u: goto label_1845c0;
        case 0x1845e8u: goto label_1845e8;
        case 0x18465cu: goto label_18465c;
        case 0x184684u: goto label_184684;
        default: break;
    }

    ctx->pc = 0x18459cu;

    // 0x18459c: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x18459cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1845a0: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1845a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1845a4: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x1845a4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1845a8: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x1845a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1845ac: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1845acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1845b0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1845b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1845b4: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x1845b4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1845b8: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x1845B8u;
    SET_GPR_U32(ctx, 31, 0x1845C0u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x1845B8u, 0x1845C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1845C0u;
label_1845c0:
    // 0x1845c0: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x1845c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x1845c4: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x1845c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1845c8: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x1845c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1845cc: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x1845ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1845d0: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x1845d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1845d4: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1845d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1845d8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1845d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1845dc: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x1845dcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1845e0: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x1845E0u;
    SET_GPR_U32(ctx, 31, 0x1845E8u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x1845E0u, 0x1845E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1845E8u;
label_1845e8:
    // 0x1845e8: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1845e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1845ec: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x1845ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1845f0: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x1845f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1845f4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1845f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1845f8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1845f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1845fc: 0xc420f248  lwc1        $f0, -0xDB8($at)
    ctx->pc = 0x1845fcu;
    { uint32_t bits = FAST_READ32(0x47F248u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184600: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x184600u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x184604: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x184604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x184608: 0xc420f250  lwc1        $f0, -0xDB0($at)
    ctx->pc = 0x184608u;
    { uint32_t bits = FAST_READ32(0x47F250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18460c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x18460cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x184610: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x184610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184614: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x184614u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x184618: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x184618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x18461c: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x18461cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x184620: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x184620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184624: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x184624u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x184628: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x184628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18462c: 0xc420f248  lwc1        $f0, -0xDB8($at)
    ctx->pc = 0x18462cu;
    { uint32_t bits = FAST_READ32(0x47F248u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184630: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x184630u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x184634: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x184634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x184638: 0xc420f250  lwc1        $f0, -0xDB0($at)
    ctx->pc = 0x184638u;
    { uint32_t bits = FAST_READ32(0x47F250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18463c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x18463cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x184640: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x184640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184644: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x184644u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x184648: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x184648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x18464c: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x18464cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x184650: 0xc7ad0048  lwc1        $f13, 0x48($sp)
    ctx->pc = 0x184650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x184654: 0xc0455e6  jal         func_115798
    ctx->pc = 0x184654u;
    SET_GPR_U32(ctx, 31, 0x18465Cu);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x184654u, 0x18465Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18465Cu;
label_18465c:
    // 0x18465c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x18465cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x184660: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x184660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x184664: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x184664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x184668: 0x0  nop
    ctx->pc = 0x184668u;
    // NOP
    // 0x18466c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18466cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x184670: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x184670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x184674: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x184674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x184678: 0xc7ad0058  lwc1        $f13, 0x58($sp)
    ctx->pc = 0x184678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x18467c: 0xc0455e6  jal         func_115798
    ctx->pc = 0x18467Cu;
    SET_GPR_U32(ctx, 31, 0x184684u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x18467Cu, 0x184684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184684u;
label_184684:
    // 0x184684: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x184684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x184688: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x184688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18468c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18468cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x184690: 0x0  nop
    ctx->pc = 0x184690u;
    // NOP
    // 0x184694: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x184694u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x184698: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x184698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x18469c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x18469cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1846a0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1846a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1846a4: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x1846a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1846a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1846a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1846ac: 0x10620073  beq         $v1, $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x1846ACu;
    {
        const bool branch_taken_0x1846ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1846ac) {
            ctx->pc = 0x18487Cu;
            return;
        }
    }
    ctx->pc = 0x1846B4u;
    // 0x1846b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1846b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1846b8: 0x10620047  beq         $v1, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x1846B8u;
    {
        const bool branch_taken_0x1846b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1846b8) {
            ctx->pc = 0x1847D8u;
            return;
        }
    }
    ctx->pc = 0x1846C0u;
    // 0x1846c0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1846C0u;
    {
        const bool branch_taken_0x1846c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1846c0) {
            ctx->pc = 0x1846D0u;
            return;
        }
    }
    ctx->pc = 0x1846C8u;
    // 0x1846c8: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x1846C8u;
    {
        const bool branch_taken_0x1846c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1846c8) {
            ctx->pc = 0x184918u;
            return;
        }
    }
    ctx->pc = 0x1846D0u;
}
