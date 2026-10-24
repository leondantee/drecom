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

// Function: entry_002ea920
// Address: 0x2ea920 - 0x2ea9a0
void entry_002ea920_0x2ea920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ea920_0x2ea920");
#endif

    ctx->pc = 0x2ea920u;

    // 0x2ea920: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2ea920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2ea924: 0x2467a610  addiu       $a3, $v1, -0x59F0
    ctx->pc = 0x2ea924u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2ea928: 0xafa700e8  sw          $a3, 0xE8($sp)
    ctx->pc = 0x2ea928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 7));
    // 0x2ea92c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2ea92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2ea930: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x2ea930u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ea934: 0x70c08628  paddub      $s0, $a2, $zero
    ctx->pc = 0x2ea934u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2ea938: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2ea938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2ea93c: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2ea93cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2ea940: 0x12030087  beq         $s0, $v1, . + 4 + (0x87 << 2)
    ctx->pc = 0x2EA940u;
    {
        const bool branch_taken_0x2ea940 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ea940) {
            ctx->pc = 0x2EAB60u;
            return;
        }
    }
    ctx->pc = 0x2EA948u;
    // 0x2ea948: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2ea948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ea94c: 0x16420014  bne         $s2, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2EA94Cu;
    {
        const bool branch_taken_0x2ea94c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ea94c) {
            ctx->pc = 0x2EA9A0u;
            return;
        }
    }
    ctx->pc = 0x2EA954u;
    // 0x2ea954: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x2ea954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
    // 0x2ea958: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ea958u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea95c: 0x0  nop
    ctx->pc = 0x2ea95cu;
    // NOP
    // 0x2ea960: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2ea960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2ea964: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x2ea964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x2ea968: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2ea968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2ea96c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea96cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea970: 0x0  nop
    ctx->pc = 0x2ea970u;
    // NOP
    // 0x2ea974: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2ea974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2ea978: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x2ea978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
    // 0x2ea97c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ea97cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea980: 0x0  nop
    ctx->pc = 0x2ea980u;
    // NOP
    // 0x2ea984: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2ea984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2ea988: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ea988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2ea98c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea98cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea990: 0x0  nop
    ctx->pc = 0x2ea990u;
    // NOP
    // 0x2ea994: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2ea994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2ea998: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2EA998u;
    {
        const bool branch_taken_0x2ea998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea998) {
            ctx->pc = 0x2EA9E8u;
            return;
        }
    }
    ctx->pc = 0x2EA9A0u;
}
