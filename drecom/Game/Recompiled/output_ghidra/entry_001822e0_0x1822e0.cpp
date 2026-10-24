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

// Function: entry_001822e0
// Address: 0x1822e0 - 0x1823f4
void entry_001822e0_0x1822e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001822e0_0x1822e0");
#endif

    switch (ctx->pc) {
        case 0x182358u: goto label_182358;
        default: break;
    }

    ctx->pc = 0x1822e0u;

    // 0x1822e0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1822e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1822e4: 0x8427f138  lh          $a3, -0xEC8($at)
    ctx->pc = 0x1822e4u;
    SET_GPR_S32(ctx, 7, (int16_t)FAST_READ16(0x47F138u));
    // 0x1822e8: 0x7343c  dsll32      $a2, $a3, 16
    ctx->pc = 0x1822e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 16));
    // 0x1822ec: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x1822ecu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x1822f0: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x1822f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1822f4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1822f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1822f8: 0x33940  sll         $a3, $v1, 5
    ctx->pc = 0x1822f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1822fc: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x1822fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x182300: 0x24661380  addiu       $a2, $v1, 0x1380
    ctx->pc = 0x182300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x182304: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x182304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x182308: 0x8c630158  lw          $v1, 0x158($v1)
    ctx->pc = 0x182308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 344)));
    // 0x18230c: 0x306607ff  andi        $a2, $v1, 0x7FF
    ctx->pc = 0x18230cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x182310: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x182310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x182314: 0x14c30041  bne         $a2, $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x182314u;
    {
        const bool branch_taken_0x182314 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x182314) {
            ctx->pc = 0x18241Cu;
            return;
        }
    }
    ctx->pc = 0x18231Cu;
    // 0x18231c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18231cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182320: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x182320u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x182324: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x182324u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x182328: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x182328u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x18232c: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x18232cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x182330: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x182330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x182334: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x182334u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x182338: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x182338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x18233c: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x18233cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x182340: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x182340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x182344: 0x260301a0  addiu       $v1, $s0, 0x1A0
    ctx->pc = 0x182344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x182348: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x182348u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x18234c: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x18234cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x182350: 0xc05ec8c  jal         func_17B230
    ctx->pc = 0x182350u;
    SET_GPR_U32(ctx, 31, 0x182358u);
    ctx->pc = 0x17B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B230u, 0x182350u, 0x182358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182358u;
label_182358:
    // 0x182358: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x182358u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18235c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18235cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182360: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x182360u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x182364: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x182364u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x182368: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x182368u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x18236c: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x18236cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x182370: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x182370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x182374: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x182374u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x182378: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x182378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x18237c: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x18237cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x182380: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x182380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x182384: 0x24c30090  addiu       $v1, $a2, 0x90
    ctx->pc = 0x182384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
    // 0x182388: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x182388u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18238c: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x18238cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x182390: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x182390u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x182394: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x182394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x182398: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x182398u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18239c: 0x0  nop
    ctx->pc = 0x18239cu;
    // NOP
    // 0x1823a0: 0xe600019c  swc1        $f0, 0x19C($s0)
    ctx->pc = 0x1823a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 412), bits); }
    // 0x1823a4: 0x26030190  addiu       $v1, $s0, 0x190
    ctx->pc = 0x1823a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x1823a8: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x1823a8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1823ac: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1823acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1823b0: 0x24670030  addiu       $a3, $v1, 0x30
    ctx->pc = 0x1823b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1823b4: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x1823b4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
    // 0x1823b8: 0x260301a0  addiu       $v1, $s0, 0x1A0
    ctx->pc = 0x1823b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x1823bc: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x1823bcu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1823c0: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x1823c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1823c4: 0x24e30050  addiu       $v1, $a3, 0x50
    ctx->pc = 0x1823c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
    // 0x1823c8: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x1823c8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
    // 0x1823cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1823ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1823d0: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x1823d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1823d4: 0xe4c00074  swc1        $f0, 0x74($a2)
    ctx->pc = 0x1823d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 116), bits); }
    // 0x1823d8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1823d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1823dc: 0x8c6300b8  lw          $v1, 0xB8($v1)
    ctx->pc = 0x1823dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 184)));
    // 0x1823e0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1823E0u;
    {
        const bool branch_taken_0x1823e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1823e0) {
            ctx->pc = 0x1823F4u;
            return;
        }
    }
    ctx->pc = 0x1823E8u;
    // 0x1823e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1823e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1823ec: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x1823ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1823f0: 0xacc700b8  sw          $a3, 0xB8($a2)
    ctx->pc = 0x1823f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 184), GPR_U32(ctx, 7));
    ctx->pc = 0x1823f4u;
}
