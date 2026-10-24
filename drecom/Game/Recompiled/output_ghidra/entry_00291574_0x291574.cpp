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

// Function: entry_00291574
// Address: 0x291574 - 0x291610
void entry_00291574_0x291574(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00291574_0x291574");
#endif

    ctx->pc = 0x291574u;

    // 0x291574: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x291574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x291578: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x291578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x29157c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29157cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x291580: 0x0  nop
    ctx->pc = 0x291580u;
    // NOP
    // 0x291584: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x291584u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x291588: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x291588u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29158c: 0x0  nop
    ctx->pc = 0x29158cu;
    // NOP
    // 0x291590: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x291590u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x291594: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x291594u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x291598: 0x8fa301f8  lw          $v1, 0x1F8($sp)
    ctx->pc = 0x291598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x29159c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x29159cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2915a0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2915a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2915a4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2915a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2915a8: 0xc4202a60  lwc1        $f0, 0x2A60($at)
    ctx->pc = 0x2915a8u;
    { uint32_t bits = FAST_READ32(0x622A60u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2915ac: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2915acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2915b0: 0xe7a001e8  swc1        $f0, 0x1E8($sp)
    ctx->pc = 0x2915b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
    // 0x2915b4: 0xc7a101e8  lwc1        $f1, 0x1E8($sp)
    ctx->pc = 0x2915b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2915b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2915b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2915bc: 0x0  nop
    ctx->pc = 0x2915bcu;
    // NOP
    // 0x2915c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2915c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2915c4: 0x0  nop
    ctx->pc = 0x2915c4u;
    // NOP
    // 0x2915c8: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x2915C8u;
    {
        const bool branch_taken_0x2915c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2915c8) {
            ctx->pc = 0x291610u;
            return;
        }
    }
    ctx->pc = 0x2915D0u;
    // 0x2915d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2915d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2915d4: 0x0  nop
    ctx->pc = 0x2915d4u;
    // NOP
    // 0x2915d8: 0xe7a001e8  swc1        $f0, 0x1E8($sp)
    ctx->pc = 0x2915d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
    // 0x2915dc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2915dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2915e0: 0xac342a70  sw          $s4, 0x2A70($at)
    ctx->pc = 0x2915e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 20)); ps2TraceGuestWrite(rdram, 0x622A70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622A70u, _value); } while (0);
    // 0x2915e4: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x2915e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x2915e8: 0x90420015  lbu         $v0, 0x15($v0)
    ctx->pc = 0x2915e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 21)));
    // 0x2915ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2915ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2915f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2915f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2915f4: 0x104000a6  beqz        $v0, . + 4 + (0xA6 << 2)
    ctx->pc = 0x2915F4u;
    {
        const bool branch_taken_0x2915f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2915f4) {
            ctx->pc = 0x291890u;
            return;
        }
    }
    ctx->pc = 0x2915FCu;
    // 0x2915fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2915fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x291600: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x291600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x291604: 0xa0430014  sb          $v1, 0x14($v0)
    ctx->pc = 0x291604u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 20), (uint8_t)GPR_U32(ctx, 3));
    // 0x291608: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x291608u;
    {
        const bool branch_taken_0x291608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x291608) {
            ctx->pc = 0x291890u;
            return;
        }
    }
    ctx->pc = 0x291610u;
}
