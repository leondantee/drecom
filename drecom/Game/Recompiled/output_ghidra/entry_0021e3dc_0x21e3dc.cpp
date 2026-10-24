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

// Function: entry_0021e3dc
// Address: 0x21e3dc - 0x21e4ac
void entry_0021e3dc_0x21e3dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021e3dc_0x21e3dc");
#endif

    switch (ctx->pc) {
        case 0x21e434u: goto label_21e434;
        case 0x21e454u: goto label_21e454;
        case 0x21e474u: goto label_21e474;
        default: break;
    }

    ctx->pc = 0x21e3dcu;

    // 0x21e3dc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e3e0: 0x8c64012c  lw          $a0, 0x12C($v1)
    ctx->pc = 0x21e3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 300)));
    // 0x21e3e4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x21e3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x21e3e8: 0x14830030  bne         $a0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x21E3E8u;
    {
        const bool branch_taken_0x21e3e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x21e3e8) {
            ctx->pc = 0x21E4ACu;
            return;
        }
    }
    ctx->pc = 0x21E3F0u;
    // 0x21e3f0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x21e3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e3f4: 0x8c900130  lw          $s0, 0x130($a0)
    ctx->pc = 0x21e3f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x21e3f8: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x21e3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x21e3fc: 0xac830130  sw          $v1, 0x130($a0)
    ctx->pc = 0x21e3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 304), GPR_U32(ctx, 3));
    // 0x21e400: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x21e400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e404: 0x8ca30130  lw          $v1, 0x130($a1)
    ctx->pc = 0x21e404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x21e408: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x21E408u;
    {
        const bool branch_taken_0x21e408 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e408) {
            ctx->pc = 0x21E4ACu;
            return;
        }
    }
    ctx->pc = 0x21E410u;
    // 0x21e410: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x21e410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21e414: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e418: 0xac64012c  sw          $a0, 0x12C($v1)
    ctx->pc = 0x21e418u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 300), GPR_U32(ctx, 4));
    // 0x21e41c: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x21e41cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e420: 0x94a30118  lhu         $v1, 0x118($a1)
    ctx->pc = 0x21e420u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 280)));
    // 0x21e424: 0x3064fffe  andi        $a0, $v1, 0xFFFE
    ctx->pc = 0x21e424u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65534);
    // 0x21e428: 0xa4a40118  sh          $a0, 0x118($a1)
    ctx->pc = 0x21e428u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 280), (uint16_t)GPR_U32(ctx, 4));
    // 0x21e42c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21E42Cu;
    SET_GPR_U32(ctx, 31, 0x21E434u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21E42Cu, 0x21E434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E434u;
label_21e434:
    // 0x21e434: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x21e434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x21e438: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21e438u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21e43c: 0x0  nop
    ctx->pc = 0x21e43cu;
    // NOP
    // 0x21e440: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21e440u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21e444: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e448: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x21e448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x21e44c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21E44Cu;
    SET_GPR_U32(ctx, 31, 0x21E454u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21E44Cu, 0x21E454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E454u;
label_21e454:
    // 0x21e454: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x21e454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x21e458: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21e458u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21e45c: 0x0  nop
    ctx->pc = 0x21e45cu;
    // NOP
    // 0x21e460: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21e460u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21e464: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x21e464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e468: 0xe4800054  swc1        $f0, 0x54($a0)
    ctx->pc = 0x21e468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
    // 0x21e46c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21E46Cu;
    SET_GPR_U32(ctx, 31, 0x21E474u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21E46Cu, 0x21E474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E474u;
label_21e474:
    // 0x21e474: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x21e474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x21e478: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21e478u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21e47c: 0x0  nop
    ctx->pc = 0x21e47cu;
    // NOP
    // 0x21e480: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21e480u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21e484: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x21e484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e488: 0xe4800058  swc1        $f0, 0x58($a0)
    ctx->pc = 0x21e488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x21e48c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x21e48cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x21e490: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21e490u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e494: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e498: 0xe460005c  swc1        $f0, 0x5C($v1)
    ctx->pc = 0x21e498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 92), bits); }
    // 0x21e49c: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x21e49cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
    // 0x21e4a0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x21e4a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e4a4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e4a8: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x21e4a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
    ctx->pc = 0x21e4acu;
}
