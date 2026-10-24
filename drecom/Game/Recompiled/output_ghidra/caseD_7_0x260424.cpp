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

// Function: caseD_7
// Address: 0x260424 - 0x26053c
void caseD_7_0x260424(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x260424");
#endif

    switch (ctx->pc) {
        case 0x260430u: goto label_260430;
        case 0x2604b4u: goto label_2604b4;
        case 0x26051cu: goto label_26051c;
        default: break;
    }

    ctx->pc = 0x260424u;

    // 0x260424: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x260424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x260428: 0xc067588  jal         func_19D620
    ctx->pc = 0x260428u;
    SET_GPR_U32(ctx, 31, 0x260430u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x260428u, 0x260430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260430u;
label_260430:
    // 0x260430: 0xe7a00250  swc1        $f0, 0x250($sp)
    ctx->pc = 0x260430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 592), bits); }
    // 0x260434: 0xc7a20250  lwc1        $f2, 0x250($sp)
    ctx->pc = 0x260434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x260438: 0xc7a10248  lwc1        $f1, 0x248($sp)
    ctx->pc = 0x260438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26043c: 0xc7a0024c  lwc1        $f0, 0x24C($sp)
    ctx->pc = 0x26043cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x260440: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x260440u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x260444: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x260444u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x260448: 0x0  nop
    ctx->pc = 0x260448u;
    // NOP
    // 0x26044c: 0x4500003b  bc1f        . + 4 + (0x3B << 2)
    ctx->pc = 0x26044Cu;
    {
        const bool branch_taken_0x26044c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26044c) {
            ctx->pc = 0x26053Cu;
            return;
        }
    }
    ctx->pc = 0x260454u;
    // 0x260454: 0xc7a1024c  lwc1        $f1, 0x24C($sp)
    ctx->pc = 0x260454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x260458: 0xc7a0024c  lwc1        $f0, 0x24C($sp)
    ctx->pc = 0x260458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26045c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x26045cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x260460: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x260460u;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
    // 0x260464: 0xc7a10248  lwc1        $f1, 0x248($sp)
    ctx->pc = 0x260464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x260468: 0xc7a00248  lwc1        $f0, 0x248($sp)
    ctx->pc = 0x260468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26046c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x26046cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x260470: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x260470u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x260474: 0xc7a10250  lwc1        $f1, 0x250($sp)
    ctx->pc = 0x260474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x260478: 0xc7a00250  lwc1        $f0, 0x250($sp)
    ctx->pc = 0x260478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26047c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x26047cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x260480: 0x46020080  add.s       $f2, $f0, $f2
    ctx->pc = 0x260480u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x260484: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x260484u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x260488: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x260488u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26048c: 0xc7a00248  lwc1        $f0, 0x248($sp)
    ctx->pc = 0x26048cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x260490: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x260490u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x260494: 0xc7a00250  lwc1        $f0, 0x250($sp)
    ctx->pc = 0x260494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x260498: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x260498u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26049c: 0x46001303  div.s       $f12, $f2, $f0
    ctx->pc = 0x26049cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x2604a0: 0x0  nop
    ctx->pc = 0x2604a0u;
    // NOP
    // 0x2604a4: 0x0  nop
    ctx->pc = 0x2604a4u;
    // NOP
    // 0x2604a8: 0x0  nop
    ctx->pc = 0x2604a8u;
    // NOP
    // 0x2604ac: 0xc045566  jal         func_115598
    ctx->pc = 0x2604ACu;
    SET_GPR_U32(ctx, 31, 0x2604B4u);
    ctx->pc = 0x115598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115598u, 0x2604ACu, 0x2604B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2604B4u;
label_2604b4:
    // 0x2604b4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2604b4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2604b8: 0xe7a00240  swc1        $f0, 0x240($sp)
    ctx->pc = 0x2604b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 576), bits); }
    // 0x2604bc: 0xc7a10250  lwc1        $f1, 0x250($sp)
    ctx->pc = 0x2604bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2604c0: 0xc7a00250  lwc1        $f0, 0x250($sp)
    ctx->pc = 0x2604c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2604c4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2604c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2604c8: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x2604c8u;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
    // 0x2604cc: 0xc7a10248  lwc1        $f1, 0x248($sp)
    ctx->pc = 0x2604ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2604d0: 0xc7a00248  lwc1        $f0, 0x248($sp)
    ctx->pc = 0x2604d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2604d4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2604d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2604d8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2604d8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2604dc: 0xc7a1024c  lwc1        $f1, 0x24C($sp)
    ctx->pc = 0x2604dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2604e0: 0xc7a0024c  lwc1        $f0, 0x24C($sp)
    ctx->pc = 0x2604e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2604e4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2604e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2604e8: 0x46020080  add.s       $f2, $f0, $f2
    ctx->pc = 0x2604e8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2604ec: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x2604ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x2604f0: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2604f0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2604f4: 0xc7a00248  lwc1        $f0, 0x248($sp)
    ctx->pc = 0x2604f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2604f8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2604f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2604fc: 0xc7a0024c  lwc1        $f0, 0x24C($sp)
    ctx->pc = 0x2604fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x260500: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x260500u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x260504: 0x46001303  div.s       $f12, $f2, $f0
    ctx->pc = 0x260504u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x260508: 0x0  nop
    ctx->pc = 0x260508u;
    // NOP
    // 0x26050c: 0x0  nop
    ctx->pc = 0x26050cu;
    // NOP
    // 0x260510: 0x0  nop
    ctx->pc = 0x260510u;
    // NOP
    // 0x260514: 0xc045566  jal         func_115598
    ctx->pc = 0x260514u;
    SET_GPR_U32(ctx, 31, 0x26051Cu);
    ctx->pc = 0x115598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115598u, 0x260514u, 0x26051Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26051Cu;
label_26051c:
    // 0x26051c: 0x3c044049  lui         $a0, 0x4049
    ctx->pc = 0x26051cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16457 << 16));
    // 0x260520: 0x34820fdb  ori         $v0, $a0, 0xFDB
    ctx->pc = 0x260520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x260524: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x260524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x260528: 0x0  nop
    ctx->pc = 0x260528u;
    // NOP
    // 0x26052c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26052cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x260530: 0xe7a00244  swc1        $f0, 0x244($sp)
    ctx->pc = 0x260530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 580), bits); }
    // 0x260534: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x260534u;
    {
        const bool branch_taken_0x260534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x260534) {
            ctx->pc = 0x260614u;
            return;
        }
    }
    ctx->pc = 0x26053Cu;
}
