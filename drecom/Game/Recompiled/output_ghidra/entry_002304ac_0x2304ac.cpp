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

// Function: entry_002304ac
// Address: 0x2304ac - 0x230540
void entry_002304ac_0x2304ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002304ac_0x2304ac");
#endif

    ctx->pc = 0x2304acu;

    // 0x2304ac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2304acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2304b0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2304b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2304b4: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x2304b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2304b8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2304b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2304bc: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x2304bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2304c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2304c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2304c4: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x2304c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x2304c8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2304c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2304cc: 0x8463127e  lh          $v1, 0x127E($v1)
    ctx->pc = 0x2304ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x2304d0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2304d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2304d4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2304d4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2304d8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2304d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2304dc: 0x1460003d  bnez        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x2304DCu;
    {
        const bool branch_taken_0x2304dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2304dc) {
            ctx->pc = 0x2305D4u;
            return;
        }
    }
    ctx->pc = 0x2304E4u;
    // 0x2304e4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2304e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2304e8: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2304e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2304ec: 0xc4810028  lwc1        $f1, 0x28($a0)
    ctx->pc = 0x2304ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2304f0: 0x3c033da3  lui         $v1, 0x3DA3
    ctx->pc = 0x2304f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15779 << 16));
    // 0x2304f4: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2304f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2304f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2304f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2304fc: 0x0  nop
    ctx->pc = 0x2304fcu;
    // NOP
    // 0x230500: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x230500u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x230504: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x230504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x230508: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x230508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23050c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23050cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x230510: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x230510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230514: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x230514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x230518: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x230518u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23051c: 0x0  nop
    ctx->pc = 0x23051cu;
    // NOP
    // 0x230520: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x230520u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x230524: 0x0  nop
    ctx->pc = 0x230524u;
    // NOP
    // 0x230528: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x230528u;
    {
        const bool branch_taken_0x230528 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x230528) {
            ctx->pc = 0x230540u;
            return;
        }
    }
    ctx->pc = 0x230530u;
    // 0x230530: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x230530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x230534: 0x8483127e  lh          $v1, 0x127E($a0)
    ctx->pc = 0x230534u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4734)));
    // 0x230538: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x230538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x23053c: 0xa483127e  sh          $v1, 0x127E($a0)
    ctx->pc = 0x23053cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4734), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x230540u;
}
