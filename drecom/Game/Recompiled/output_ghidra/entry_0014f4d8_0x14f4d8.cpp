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

// Function: entry_0014f4d8
// Address: 0x14f4d8 - 0x14f5c0
void entry_0014f4d8_0x14f4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f4d8_0x14f4d8");
#endif

    switch (ctx->pc) {
        case 0x14f544u: goto label_14f544;
        default: break;
    }

    ctx->pc = 0x14f4d8u;

    // 0x14f4d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14f4d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f4dc: 0x0  nop
    ctx->pc = 0x14f4dcu;
    // NOP
    // 0x14f4e0: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x14f4e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x14f4e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14f4e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f4e8: 0x0  nop
    ctx->pc = 0x14f4e8u;
    // NOP
    // 0x14f4ec: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x14f4ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x14f4f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14f4f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f4f4: 0x0  nop
    ctx->pc = 0x14f4f4u;
    // NOP
    // 0x14f4f8: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x14f4f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x14f4fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14f4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14f500: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f504: 0x0  nop
    ctx->pc = 0x14f504u;
    // NOP
    // 0x14f508: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x14f508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x14f50c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14f50cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f510: 0x0  nop
    ctx->pc = 0x14f510u;
    // NOP
    // 0x14f514: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x14f514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x14f518: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14f518u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f51c: 0x0  nop
    ctx->pc = 0x14f51cu;
    // NOP
    // 0x14f520: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x14f520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x14f524: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14f524u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f528: 0x0  nop
    ctx->pc = 0x14f528u;
    // NOP
    // 0x14f52c: 0xe60000d8  swc1        $f0, 0xD8($s0)
    ctx->pc = 0x14f52cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
    // 0x14f530: 0x8e0202d0  lw          $v0, 0x2D0($s0)
    ctx->pc = 0x14f530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x14f534: 0x24550190  addiu       $s5, $v0, 0x190
    ctx->pc = 0x14f534u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x14f538: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x14f538u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x14f53c: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x14F53Cu;
    SET_GPR_U32(ctx, 31, 0x14F544u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x14F544u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x14F544u) { return; }
    ctx->pc = 0x14F544u;
label_14f544:
    // 0x14f544: 0x8e020330  lw          $v0, 0x330($s0)
    ctx->pc = 0x14f544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x14f548: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x14f548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f54c: 0xe6a00030  swc1        $f0, 0x30($s5)
    ctx->pc = 0x14f54cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 48), bits); }
    // 0x14f550: 0x8e020330  lw          $v0, 0x330($s0)
    ctx->pc = 0x14f550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x14f554: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x14f554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f558: 0xe6a00034  swc1        $f0, 0x34($s5)
    ctx->pc = 0x14f558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 52), bits); }
    // 0x14f55c: 0x8e020330  lw          $v0, 0x330($s0)
    ctx->pc = 0x14f55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x14f560: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x14f560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f564: 0xe6a00038  swc1        $f0, 0x38($s5)
    ctx->pc = 0x14f564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 56), bits); }
    // 0x14f568: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14f568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14f56c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f56cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f570: 0x0  nop
    ctx->pc = 0x14f570u;
    // NOP
    // 0x14f574: 0xe6a0003c  swc1        $f0, 0x3C($s5)
    ctx->pc = 0x14f574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 60), bits); }
    // 0x14f578: 0x8e0302d0  lw          $v1, 0x2D0($s0)
    ctx->pc = 0x14f578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x14f57c: 0x946202d0  lhu         $v0, 0x2D0($v1)
    ctx->pc = 0x14f57cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x14f580: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x14f580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x14f584: 0xa46202d0  sh          $v0, 0x2D0($v1)
    ctx->pc = 0x14f584u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 720), (uint16_t)GPR_U32(ctx, 2));
    // 0x14f588: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14f588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14f58c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f58cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f590: 0x8e0202d0  lw          $v0, 0x2D0($s0)
    ctx->pc = 0x14f590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x14f594: 0xe44002b8  swc1        $f0, 0x2B8($v0)
    ctx->pc = 0x14f594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 696), bits); }
    // 0x14f598: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14f598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14f59c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f59cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f5a0: 0x8e0202d0  lw          $v0, 0x2D0($s0)
    ctx->pc = 0x14f5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x14f5a4: 0xe44002bc  swc1        $f0, 0x2BC($v0)
    ctx->pc = 0x14f5a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 700), bits); }
    // 0x14f5a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14f5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14f5ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f5acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f5b0: 0x8e0202d0  lw          $v0, 0x2D0($s0)
    ctx->pc = 0x14f5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x14f5b4: 0xe44002c0  swc1        $f0, 0x2C0($v0)
    ctx->pc = 0x14f5b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 704), bits); }
    // 0x14f5b8: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x14F5B8u;
    {
        const bool branch_taken_0x14f5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f5b8) {
            ctx->pc = 0x14F6CCu;
            return;
        }
    }
    ctx->pc = 0x14F5C0u;
}
