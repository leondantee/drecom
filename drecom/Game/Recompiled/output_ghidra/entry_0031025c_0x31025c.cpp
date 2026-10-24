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

// Function: entry_0031025c
// Address: 0x31025c - 0x310328
void entry_0031025c_0x31025c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031025c_0x31025c");
#endif

    ctx->pc = 0x31025cu;

    // 0x31025c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31025cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310260: 0x2443135c  addiu       $v1, $v0, 0x135C
    ctx->pc = 0x310260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4956));
    // 0x310264: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x310264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310268: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x310268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x31026c: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x31026cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x310270: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x310270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x310274: 0x0  nop
    ctx->pc = 0x310274u;
    // NOP
    // 0x310278: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x310278u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31027c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x31027cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x310280: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x310280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310284: 0x2442135c  addiu       $v0, $v0, 0x135C
    ctx->pc = 0x310284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4956));
    // 0x310288: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x310288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31028c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31028cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x310290: 0x0  nop
    ctx->pc = 0x310290u;
    // NOP
    // 0x310294: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x310294u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x310298: 0x0  nop
    ctx->pc = 0x310298u;
    // NOP
    // 0x31029c: 0x4500006d  bc1f        . + 4 + (0x6D << 2)
    ctx->pc = 0x31029Cu;
    {
        const bool branch_taken_0x31029c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31029c) {
            ctx->pc = 0x310454u;
            return;
        }
    }
    ctx->pc = 0x3102A4u;
    // 0x3102a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3102a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3102a8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3102a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3102ac: 0x2442135c  addiu       $v0, $v0, 0x135C
    ctx->pc = 0x3102acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4956));
    // 0x3102b0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x3102b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x3102b4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3102b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3102b8: 0x24421348  addiu       $v0, $v0, 0x1348
    ctx->pc = 0x3102b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4936));
    // 0x3102bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3102bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3102c0: 0xc4610104  lwc1        $f1, 0x104($v1)
    ctx->pc = 0x3102c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3102c4: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x3102c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x3102c8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3102c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3102cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3102ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3102d0: 0x0  nop
    ctx->pc = 0x3102d0u;
    // NOP
    // 0x3102d4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3102d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3102d8: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x3102d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x3102dc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3102dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3102e0: 0x24421348  addiu       $v0, $v0, 0x1348
    ctx->pc = 0x3102e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4936));
    // 0x3102e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3102e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3102e8: 0xc4410104  lwc1        $f1, 0x104($v0)
    ctx->pc = 0x3102e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3102ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3102ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3102f0: 0x0  nop
    ctx->pc = 0x3102f0u;
    // NOP
    // 0x3102f4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3102f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3102f8: 0x0  nop
    ctx->pc = 0x3102f8u;
    // NOP
    // 0x3102fc: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x3102FCu;
    {
        const bool branch_taken_0x3102fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3102fc) {
            ctx->pc = 0x310328u;
            return;
        }
    }
    ctx->pc = 0x310304u;
    // 0x310304: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x310304u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x310308: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x310308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31030c: 0x24421348  addiu       $v0, $v0, 0x1348
    ctx->pc = 0x31030cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4936));
    // 0x310310: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x310310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x310314: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x310314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x310318: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x310318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31031c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x31031cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x310320: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x310320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x310324: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x310324u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x310328u;
}
