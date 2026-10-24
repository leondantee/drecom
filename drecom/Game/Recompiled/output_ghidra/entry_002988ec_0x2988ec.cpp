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

// Function: entry_002988ec
// Address: 0x2988ec - 0x29896c
void entry_002988ec_0x2988ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002988ec_0x2988ec");
#endif

    ctx->pc = 0x2988ecu;

    // 0x2988ec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2988ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2988f0: 0x24641334  addiu       $a0, $v1, 0x1334
    ctx->pc = 0x2988f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4916));
    // 0x2988f4: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2988f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2988f8: 0x3c033d23  lui         $v1, 0x3D23
    ctx->pc = 0x2988f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15651 << 16));
    // 0x2988fc: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2988fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x298900: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x298900u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298904: 0x0  nop
    ctx->pc = 0x298904u;
    // NOP
    // 0x298908: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x298908u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29890c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x29890cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x298910: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x298910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298914: 0x24631334  addiu       $v1, $v1, 0x1334
    ctx->pc = 0x298914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4916));
    // 0x298918: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x298918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29891c: 0x3c033ecc  lui         $v1, 0x3ECC
    ctx->pc = 0x29891cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16076 << 16));
    // 0x298920: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x298920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x298924: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x298924u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298928: 0x0  nop
    ctx->pc = 0x298928u;
    // NOP
    // 0x29892c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29892cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x298930: 0x0  nop
    ctx->pc = 0x298930u;
    // NOP
    // 0x298934: 0x45000044  bc1f        . + 4 + (0x44 << 2)
    ctx->pc = 0x298934u;
    {
        const bool branch_taken_0x298934 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x298934) {
            ctx->pc = 0x298A48u;
            return;
        }
    }
    ctx->pc = 0x29893Cu;
    // 0x29893c: 0x3c033ecc  lui         $v1, 0x3ECC
    ctx->pc = 0x29893cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16076 << 16));
    // 0x298940: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x298940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x298944: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x298944u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298948: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x298948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29894c: 0x24631334  addiu       $v1, $v1, 0x1334
    ctx->pc = 0x29894cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4916));
    // 0x298950: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x298950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x298954: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x298954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298958: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x298958u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x29895c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x29895cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x298960: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x298960u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x298964: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x298964u;
    {
        const bool branch_taken_0x298964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x298964) {
            ctx->pc = 0x298A48u;
            return;
        }
    }
    ctx->pc = 0x29896Cu;
}
