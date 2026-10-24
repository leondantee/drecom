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

// Function: entry_002461a8
// Address: 0x2461a8 - 0x246250
void entry_002461a8_0x2461a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002461a8_0x2461a8");
#endif

    switch (ctx->pc) {
        case 0x2461bcu: goto label_2461bc;
        default: break;
    }

    ctx->pc = 0x2461a8u;

    // 0x2461a8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2461a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2461ac: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2461acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2461b0: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x2461b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2461b4: 0xc067594  jal         func_19D650
    ctx->pc = 0x2461B4u;
    SET_GPR_U32(ctx, 31, 0x2461BCu);
    ctx->pc = 0x19D650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D650u, 0x2461B4u, 0x2461BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2461BCu;
label_2461bc:
    // 0x2461bc: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2461bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2461c0: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x2461c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2461c4: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x2461c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
    // 0x2461c8: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2461c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2461cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2461ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2461d0: 0x0  nop
    ctx->pc = 0x2461d0u;
    // NOP
    // 0x2461d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2461d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2461d8: 0x0  nop
    ctx->pc = 0x2461d8u;
    // NOP
    // 0x2461dc: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x2461DCu;
    {
        const bool branch_taken_0x2461dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2461dc) {
            ctx->pc = 0x246250u;
            return;
        }
    }
    ctx->pc = 0x2461E4u;
    // 0x2461e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2461e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2461e8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2461e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2461ec: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2461ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2461f0: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x2461f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x2461f4: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2461f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2461f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2461f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2461fc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2461fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x246200: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x246200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x246204: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x246204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x246208: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x246208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x24620c: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x24620cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x246210: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x246210u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246214: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x246214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x246218: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x246218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x24621c: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x24621cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x246220: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x246220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x246224: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x246224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x246228: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x246228u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24622c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x24622cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x246230: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x246230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x246234: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x246234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x246238: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x246238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24623c: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x24623cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x246240: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x246240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x246244: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x246244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x246248: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x246248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x24624c: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x24624cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    ctx->pc = 0x246250u;
}
