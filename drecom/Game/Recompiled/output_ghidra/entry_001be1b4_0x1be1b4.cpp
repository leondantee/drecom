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

// Function: entry_001be1b4
// Address: 0x1be1b4 - 0x1be28c
void entry_001be1b4_0x1be1b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be1b4_0x1be1b4");
#endif

    switch (ctx->pc) {
        case 0x1be1dcu: goto label_1be1dc;
        case 0x1be1f0u: goto label_1be1f0;
        case 0x1be20cu: goto label_1be20c;
        case 0x1be224u: goto label_1be224;
        default: break;
    }

    ctx->pc = 0x1be1b4u;

    // 0x1be1b4: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1be1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be1b8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1be1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1be1bc: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1be1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x1be1c0: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x1be1c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1be1c4: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x1be1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x1be1c8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1be1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be1cc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1be1ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1be1d0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1be1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1be1d4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1BE1D4u;
    SET_GPR_U32(ctx, 31, 0x1BE1DCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1BE1D4u, 0x1BE1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE1DCu;
label_1be1dc:
    // 0x1be1dc: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1be1dcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1be1e0: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1be1e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be1e4: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x1be1e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1be1e8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1BE1E8u;
    SET_GPR_U32(ctx, 31, 0x1BE1F0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1BE1E8u, 0x1BE1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE1F0u;
label_1be1f0:
    // 0x1be1f0: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x1be1f0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1be1f4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1be1f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1be1f8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1be1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be1fc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1be1fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1be200: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1be200u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1be204: 0xc057480  jal         func_15D200
    ctx->pc = 0x1BE204u;
    SET_GPR_U32(ctx, 31, 0x1BE20Cu);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1BE204u, 0x1BE20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE20Cu;
label_1be20c:
    // 0x1be20c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be210: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1be210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be214: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x1be214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1be218: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x1be218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x1be21c: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x1BE21Cu;
    SET_GPR_U32(ctx, 31, 0x1BE224u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1BE21Cu, 0x1BE224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE224u;
label_1be224:
    // 0x1be224: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1be224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1be228: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be22c: 0xc4611284  lwc1        $f1, 0x1284($v1)
    ctx->pc = 0x1be22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1be230: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1be230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be234: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1be234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1be238: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1be238u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1be23c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1be23cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1be240: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be244: 0xc4611280  lwc1        $f1, 0x1280($v1)
    ctx->pc = 0x1be244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1be248: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1be248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be24c: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x1be24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1be250: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1be250u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1be254: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1be254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x1be258: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be25c: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1be25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1be260: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1be260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1be264: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1be264u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1be268: 0x0  nop
    ctx->pc = 0x1be268u;
    // NOP
    // 0x1be26c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1BE26Cu;
    {
        const bool branch_taken_0x1be26c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1be26c) {
            ctx->pc = 0x1BE28Cu;
            return;
        }
    }
    ctx->pc = 0x1BE274u;
    // 0x1be274: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1be274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1be278: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1be278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be27c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1be27cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1be280: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1be280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be284: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1be284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be288: 0xac821b60  sw          $v0, 0x1B60($a0)
    ctx->pc = 0x1be288u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7008), GPR_U32(ctx, 2));
    ctx->pc = 0x1be28cu;
}
