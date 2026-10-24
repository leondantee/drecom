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

// Function: entry_003554bc
// Address: 0x3554bc - 0x355558
void entry_003554bc_0x3554bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003554bc_0x3554bc");
#endif

    ctx->pc = 0x3554bcu;

    // 0x3554bc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3554bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3554c0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3554c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3554c4: 0xc46100b0  lwc1        $f1, 0xB0($v1)
    ctx->pc = 0x3554c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3554c8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3554c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3554cc: 0xc46001a4  lwc1        $f0, 0x1A4($v1)
    ctx->pc = 0x3554ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3554d0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x3554d0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3554d4: 0x0  nop
    ctx->pc = 0x3554d4u;
    // NOP
    // 0x3554d8: 0x4501003f  bc1t        . + 4 + (0x3F << 2)
    ctx->pc = 0x3554D8u;
    {
        const bool branch_taken_0x3554d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3554d8) {
            ctx->pc = 0x3555D8u;
            return;
        }
    }
    ctx->pc = 0x3554E0u;
    // 0x3554e0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3554e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3554e4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3554e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3554e8: 0xc46100b0  lwc1        $f1, 0xB0($v1)
    ctx->pc = 0x3554e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3554ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3554ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3554f0: 0xc46001a4  lwc1        $f0, 0x1A4($v1)
    ctx->pc = 0x3554f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3554f4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3554f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3554f8: 0x0  nop
    ctx->pc = 0x3554f8u;
    // NOP
    // 0x3554fc: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x3554FCu;
    {
        const bool branch_taken_0x3554fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3554fc) {
            ctx->pc = 0x355558u;
            return;
        }
    }
    ctx->pc = 0x355504u;
    // 0x355504: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355508: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x35550c: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x35550cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355510: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355514: 0xc46001a4  lwc1        $f0, 0x1A4($v1)
    ctx->pc = 0x355514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355518: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x355518u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x35551c: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x35551cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x355520: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355524: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x355528: 0xc46100b0  lwc1        $f1, 0xB0($v1)
    ctx->pc = 0x355528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35552c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35552cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355530: 0xc46001a4  lwc1        $f0, 0x1A4($v1)
    ctx->pc = 0x355530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355534: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x355534u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x355538: 0x0  nop
    ctx->pc = 0x355538u;
    // NOP
    // 0x35553c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x35553Cu;
    {
        const bool branch_taken_0x35553c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x35553c) {
            ctx->pc = 0x355558u;
            return;
        }
    }
    ctx->pc = 0x355544u;
    // 0x355544: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355548: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x35554c: 0xc46000b0  lwc1        $f0, 0xB0($v1)
    ctx->pc = 0x35554cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355550: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355554: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x355554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    ctx->pc = 0x355558u;
}
