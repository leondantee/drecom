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

// Function: entry_0021e7b0
// Address: 0x21e7b0 - 0x21e894
void entry_0021e7b0_0x21e7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021e7b0_0x21e7b0");
#endif

    ctx->pc = 0x21e7b0u;

    // 0x21e7b0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x21e7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x21e7b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21e7b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e7b8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e7bc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x21e7bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x21e7c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21e7c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e7c4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e7c8: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x21e7c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x21e7cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21e7ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e7d0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e7d4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x21e7d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x21e7d8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x21e7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x21e7dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21e7dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e7e0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e7e4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x21e7e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x21e7e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21e7e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e7ec: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e7f0: 0xe46000d0  swc1        $f0, 0xD0($v1)
    ctx->pc = 0x21e7f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 208), bits); }
    // 0x21e7f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21e7f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e7f8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e7fc: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x21e7fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x21e800: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21e800u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e804: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e808: 0xe46000d8  swc1        $f0, 0xD8($v1)
    ctx->pc = 0x21e808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 216), bits); }
    // 0x21e80c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x21e80cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x21e810: 0x2464dbc0  addiu       $a0, $v1, -0x2440
    ctx->pc = 0x21e810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x21e814: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e818: 0xac640110  sw          $a0, 0x110($v1)
    ctx->pc = 0x21e818u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 272), GPR_U32(ctx, 4));
    // 0x21e81c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x21e81cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x21e820: 0x8c24dcf0  lw          $a0, -0x2310($at)
    ctx->pc = 0x21e820u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x21e824: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e828: 0xac640114  sw          $a0, 0x114($v1)
    ctx->pc = 0x21e828u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 276), GPR_U32(ctx, 4));
    // 0x21e82c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x21e82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e830: 0x94830118  lhu         $v1, 0x118($a0)
    ctx->pc = 0x21e830u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 280)));
    // 0x21e834: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x21e834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x21e838: 0xa4830118  sh          $v1, 0x118($a0)
    ctx->pc = 0x21e838u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 280), (uint16_t)GPR_U32(ctx, 3));
    // 0x21e83c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e840: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x21e840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x21e844: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x21e844u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x21e848: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x21e848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x21e84c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21e84cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e850: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e854: 0xe460005c  swc1        $f0, 0x5C($v1)
    ctx->pc = 0x21e854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 92), bits); }
    // 0x21e858: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e85c: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x21e85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x21e860: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x21e860u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x21e864: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x21e864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x21e868: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21e868u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e86c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e870: 0xe460008c  swc1        $f0, 0x8C($v1)
    ctx->pc = 0x21e870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 140), bits); }
    // 0x21e874: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x21e874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x21e878: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x21e878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x21e87c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21e87cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e880: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e884: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x21e884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x21e888: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x21e888u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21e88c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x21E88Cu;
    {
        const bool branch_taken_0x21e88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e88c) {
            ctx->pc = 0x21E900u;
            return;
        }
    }
    ctx->pc = 0x21E894u;
}
