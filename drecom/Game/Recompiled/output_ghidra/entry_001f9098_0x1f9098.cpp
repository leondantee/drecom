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

// Function: entry_001f9098
// Address: 0x1f9098 - 0x1f9154
void entry_001f9098_0x1f9098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9098_0x1f9098");
#endif

    switch (ctx->pc) {
        case 0x1f90b8u: goto label_1f90b8;
        default: break;
    }

    ctx->pc = 0x1f9098u;

    // 0x1f9098: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x1f9098u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x1f909c: 0x344200a4  ori         $v0, $v0, 0xA4
    ctx->pc = 0x1f909cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)164);
    // 0x1f90a0: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x1f90a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f90a4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1f90a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1f90a8: 0x8e050100  lw          $a1, 0x100($s0)
    ctx->pc = 0x1f90a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x1f90ac: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x1f90acu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1f90b0: 0xc040c00  jal         func_103000
    ctx->pc = 0x1F90B0u;
    SET_GPR_U32(ctx, 31, 0x1F90B8u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x1F90B8u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1F90B8u) { return; }
    ctx->pc = 0x1F90B8u;
label_1f90b8:
    // 0x1f90b8: 0x960202d0  lhu         $v0, 0x2D0($s0)
    ctx->pc = 0x1f90b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x1f90bc: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x1f90bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x1f90c0: 0xa60202d0  sh          $v0, 0x2D0($s0)
    ctx->pc = 0x1f90c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 720), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f90c4: 0x96020460  lhu         $v0, 0x460($s0)
    ctx->pc = 0x1f90c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1120)));
    // 0x1f90c8: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x1f90c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x1f90cc: 0xa6020460  sh          $v0, 0x460($s0)
    ctx->pc = 0x1f90ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1120), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f90d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f90d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f90d4: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1f90d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f90d8: 0xa0430029  sb          $v1, 0x29($v0)
    ctx->pc = 0x1f90d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f90dc: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1f90dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1f90e0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1f90e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1f90e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f90e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f90e8: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1f90e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f90ec: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1f90ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1f90f0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1f90f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f90f4: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x1f90f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x1f90f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f90f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f90fc: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1f90fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f9100: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1f9100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1f9104: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1f9104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f9108: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x1f9108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1f910c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f910cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9110: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1f9110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f9114: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1f9114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1f9118: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f9118u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f911c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1f911cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f9120: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1f9120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1f9124: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1f9124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1f9128: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f9128u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f912c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1f912cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f9130: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x1f9130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x1f9134: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1f9134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f9138: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1f9138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f913c: 0xa443002c  sh          $v1, 0x2C($v0)
    ctx->pc = 0x1f913cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 44), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f9140: 0x3c02c59c  lui         $v0, 0xC59C
    ctx->pc = 0x1f9140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50588 << 16));
    // 0x1f9144: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1f9144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1f9148: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f9148u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f914c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1f914cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f9150: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1f9150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    ctx->pc = 0x1f9154u;
}
