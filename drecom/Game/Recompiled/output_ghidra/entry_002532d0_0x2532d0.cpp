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

// Function: entry_002532d0
// Address: 0x2532d0 - 0x253328
void entry_002532d0_0x2532d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002532d0_0x2532d0");
#endif

    switch (ctx->pc) {
        case 0x2532e4u: goto label_2532e4;
        default: break;
    }

    ctx->pc = 0x2532d0u;

    // 0x2532d0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2532d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2532d4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2532d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2532d8: 0xc7ac00d4  lwc1        $f12, 0xD4($sp)
    ctx->pc = 0x2532d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2532dc: 0xc040c60  jal         func_103180
    ctx->pc = 0x2532DCu;
    SET_GPR_U32(ctx, 31, 0x2532E4u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x2532E4u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2532E4u) { return; }
    ctx->pc = 0x2532E4u;
label_2532e4:
    // 0x2532e4: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x2532e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2532e8: 0x3c0344c7  lui         $v1, 0x44C7
    ctx->pc = 0x2532e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17607 << 16));
    // 0x2532ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2532ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2532f0: 0x0  nop
    ctx->pc = 0x2532f0u;
    // NOP
    // 0x2532f4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2532f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2532f8: 0x0  nop
    ctx->pc = 0x2532f8u;
    // NOP
    // 0x2532fc: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x2532FCu;
    {
        const bool branch_taken_0x2532fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2532fc) {
            ctx->pc = 0x253328u;
            return;
        }
    }
    ctx->pc = 0x253304u;
    // 0x253304: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x253304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x253308: 0x3c03451c  lui         $v1, 0x451C
    ctx->pc = 0x253308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17692 << 16));
    // 0x25330c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x25330cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x253310: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x253310u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253314: 0x0  nop
    ctx->pc = 0x253314u;
    // NOP
    // 0x253318: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x253318u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25331c: 0x0  nop
    ctx->pc = 0x25331cu;
    // NOP
    // 0x253320: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x253320u;
    {
        const bool branch_taken_0x253320 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x253320) {
            ctx->pc = 0x25332Cu;
            return;
        }
    }
    ctx->pc = 0x253328u;
}
