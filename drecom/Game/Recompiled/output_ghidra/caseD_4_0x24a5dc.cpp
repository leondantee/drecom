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

// Function: caseD_4
// Address: 0x24a5dc - 0x24a660
void caseD_4_0x24a5dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x24a5dc");
#endif

    switch (ctx->pc) {
        case 0x24a5fcu: goto label_24a5fc;
        default: break;
    }

    ctx->pc = 0x24a5dcu;

    // 0x24a5dc: 0x96050140  lhu         $a1, 0x140($s0)
    ctx->pc = 0x24a5dcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x24a5e0: 0x34a200a4  ori         $v0, $a1, 0xA4
    ctx->pc = 0x24a5e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)164);
    // 0x24a5e4: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x24a5e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x24a5e8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x24a5e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x24a5ec: 0x8e050100  lw          $a1, 0x100($s0)
    ctx->pc = 0x24a5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x24a5f0: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x24a5f0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x24a5f4: 0xc040c00  jal         func_103000
    ctx->pc = 0x24A5F4u;
    SET_GPR_U32(ctx, 31, 0x24A5FCu);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x24A5FCu;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24A5FCu) { return; }
    ctx->pc = 0x24A5FCu;
label_24a5fc:
    // 0x24a5fc: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x24a5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x24a600: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x24a600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24a604: 0xa0a40029  sb          $a0, 0x29($a1)
    ctx->pc = 0x24a604u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 41), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a608: 0x3c073fc9  lui         $a3, 0x3FC9
    ctx->pc = 0x24a608u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16329 << 16));
    // 0x24a60c: 0x34e60fdb  ori         $a2, $a3, 0xFDB
    ctx->pc = 0x24a60cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)4059);
    // 0x24a610: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x24a610u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a614: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24a614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24a618: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x24a618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x24a61c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24a61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24a620: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x24a620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x24a624: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24a624u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a628: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24a628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24a62c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x24a62cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x24a630: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24a630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24a634: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x24a634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x24a638: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24a638u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a63c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24a63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24a640: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x24a640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x24a644: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24a644u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a648: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24a648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24a64c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x24a64cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x24a650: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x24a650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
    // 0x24a654: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24a654u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a658: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24a658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24a65c: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x24a65cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    ctx->pc = 0x24a660u;
}
