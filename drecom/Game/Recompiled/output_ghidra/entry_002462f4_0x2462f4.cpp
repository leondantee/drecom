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

// Function: entry_002462f4
// Address: 0x2462f4 - 0x2463c4
void entry_002462f4_0x2462f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002462f4_0x2462f4");
#endif

    switch (ctx->pc) {
        case 0x246344u: goto label_246344;
        case 0x246368u: goto label_246368;
        default: break;
    }

    ctx->pc = 0x2462f4u;

    // 0x2462f4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2462f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2462f8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2462f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2462fc: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x2462fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x246300: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x246300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x246304: 0x14600151  bnez        $v1, . + 4 + (0x151 << 2)
    ctx->pc = 0x246304u;
    {
        const bool branch_taken_0x246304 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x246304) {
            ctx->pc = 0x24684Cu;
            return;
        }
    }
    ctx->pc = 0x24630Cu;
    // 0x24630c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24630cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x246310: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x246310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x246314: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x246314u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x246318: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x246318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24631c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x24631cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x246320: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x246320u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x246324: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x246324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x246328: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x246328u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x24632c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x24632cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x246330: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x246330u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x246334: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x246334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x246338: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x246338u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x24633c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x24633Cu;
    SET_GPR_U32(ctx, 31, 0x246344u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x24633Cu, 0x246344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246344u;
label_246344:
    // 0x246344: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x246344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x246348: 0x3064001f  andi        $a0, $v1, 0x1F
    ctx->pc = 0x246348u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x24634c: 0x2482003c  addiu       $v0, $a0, 0x3C
    ctx->pc = 0x24634cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 60));
    // 0x246350: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x246350u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x246354: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x246354u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x246358: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x246358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24635c: 0xa4451278  sh          $a1, 0x1278($v0)
    ctx->pc = 0x24635cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 5));
    // 0x246360: 0xc067694  jal         func_19DA50
    ctx->pc = 0x246360u;
    SET_GPR_U32(ctx, 31, 0x246368u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x246360u, 0x246368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246368u;
label_246368:
    // 0x246368: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x246368u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x24636c: 0x3085001f  andi        $a1, $a0, 0x1F
    ctx->pc = 0x24636cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x246370: 0x24a3003c  addiu       $v1, $a1, 0x3C
    ctx->pc = 0x246370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x246374: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x246374u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x246378: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x246378u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x24637c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x24637cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x246380: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x246380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x246384: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x246384u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
    // 0x246388: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x246388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24638c: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x24638cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x246390: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x246390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x246394: 0x2403ffe7  addiu       $v1, $zero, -0x19
    ctx->pc = 0x246394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x246398: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x246398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x24639c: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x24639cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    // 0x2463a0: 0x8fb10068  lw          $s1, 0x68($sp)
    ctx->pc = 0x2463a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2463a4: 0x263010b0  addiu       $s0, $s1, 0x10B0
    ctx->pc = 0x2463a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4272));
    // 0x2463a8: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x2463a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x2463ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2463acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2463b0: 0x0  nop
    ctx->pc = 0x2463b0u;
    // NOP
    // 0x2463b4: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x2463b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x2463b8: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x2463b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x2463bc: 0x10000123  b           . + 4 + (0x123 << 2)
    ctx->pc = 0x2463BCu;
    {
        const bool branch_taken_0x2463bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2463bc) {
            ctx->pc = 0x24684Cu;
            return;
        }
    }
    ctx->pc = 0x2463C4u;
}
