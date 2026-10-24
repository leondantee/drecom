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

// Function: entry_0029896c
// Address: 0x29896c - 0x298a38
void entry_0029896c_0x29896c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029896c_0x29896c");
#endif

    ctx->pc = 0x29896cu;

    // 0x29896c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x29896cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298970: 0x24641334  addiu       $a0, $v1, 0x1334
    ctx->pc = 0x298970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4916));
    // 0x298974: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x298974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x298978: 0x3c033d23  lui         $v1, 0x3D23
    ctx->pc = 0x298978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15651 << 16));
    // 0x29897c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x29897cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x298980: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x298980u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298984: 0x0  nop
    ctx->pc = 0x298984u;
    // NOP
    // 0x298988: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x298988u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29898c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x29898cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x298990: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x298990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298994: 0x24631334  addiu       $v1, $v1, 0x1334
    ctx->pc = 0x298994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4916));
    // 0x298998: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x298998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29899c: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x29899cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x2989a0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2989a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2989a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2989a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2989a8: 0x0  nop
    ctx->pc = 0x2989a8u;
    // NOP
    // 0x2989ac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2989acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2989b0: 0x0  nop
    ctx->pc = 0x2989b0u;
    // NOP
    // 0x2989b4: 0x45010024  bc1t        . + 4 + (0x24 << 2)
    ctx->pc = 0x2989B4u;
    {
        const bool branch_taken_0x2989b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2989b4) {
            ctx->pc = 0x298A48u;
            return;
        }
    }
    ctx->pc = 0x2989BCu;
    // 0x2989bc: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x2989bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x2989c0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2989c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2989c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2989c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2989c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2989c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2989cc: 0x24631334  addiu       $v1, $v1, 0x1334
    ctx->pc = 0x2989ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4916));
    // 0x2989d0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2989d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2989d4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2989d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2989d8: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x2989d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x2989dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2989dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2989e0: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x2989e0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2989e4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2989e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2989e8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2989e8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2989ec: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2989ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2989f0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2989f0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2989f4: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x2989f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2989f8: 0x1420000f  bnez        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x2989F8u;
    {
        const bool branch_taken_0x2989f8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2989f8) {
            ctx->pc = 0x298A38u;
            return;
        }
    }
    ctx->pc = 0x298A00u;
    // 0x298a00: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x298a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298a04: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x298a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298a08: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x298a08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x298a0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x298a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298a10: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x298a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298a14: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x298a14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x298a18: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x298a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298a1c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x298a1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x298a20: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x298a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298a24: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x298a24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x298a28: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x298a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298a2c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x298a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x298a30: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x298A30u;
    {
        const bool branch_taken_0x298a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x298a30) {
            ctx->pc = 0x298A48u;
            return;
        }
    }
    ctx->pc = 0x298A38u;
}
