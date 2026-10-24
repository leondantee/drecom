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

// Function: entry_00295e5c
// Address: 0x295e5c - 0x295f18
void entry_00295e5c_0x295e5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00295e5c_0x295e5c");
#endif

    ctx->pc = 0x295e5cu;

    // 0x295e5c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x295e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x295e60: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x295e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x295e64: 0xae0369b0  sw          $v1, 0x69B0($s0)
    ctx->pc = 0x295e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27056), GPR_U32(ctx, 3));
    // 0x295e68: 0x8e0369b0  lw          $v1, 0x69B0($s0)
    ctx->pc = 0x295e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27056)));
    // 0x295e6c: 0xae0369b4  sw          $v1, 0x69B4($s0)
    ctx->pc = 0x295e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27060), GPR_U32(ctx, 3));
    // 0x295e70: 0x3c030081  lui         $v1, 0x81
    ctx->pc = 0x295e70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)129 << 16));
    // 0x295e74: 0x2463ca10  addiu       $v1, $v1, -0x35F0
    ctx->pc = 0x295e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953488));
    // 0x295e78: 0xae0369bc  sw          $v1, 0x69BC($s0)
    ctx->pc = 0x295e78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27068), GPR_U32(ctx, 3));
    // 0x295e7c: 0x8e0369bc  lw          $v1, 0x69BC($s0)
    ctx->pc = 0x295e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27068)));
    // 0x295e80: 0xae0369c0  sw          $v1, 0x69C0($s0)
    ctx->pc = 0x295e80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27072), GPR_U32(ctx, 3));
    // 0x295e84: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x295e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x295e88: 0xae03699c  sw          $v1, 0x699C($s0)
    ctx->pc = 0x295e88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27036), GPR_U32(ctx, 3));
    // 0x295e8c: 0xa20069c9  sb          $zero, 0x69C9($s0)
    ctx->pc = 0x295e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27081), (uint8_t)GPR_U32(ctx, 0));
    // 0x295e90: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x295e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x295e94: 0xa20369ca  sb          $v1, 0x69CA($s0)
    ctx->pc = 0x295e94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27082), (uint8_t)GPR_U32(ctx, 3));
    // 0x295e98: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x295e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x295e9c: 0xa20369cb  sb          $v1, 0x69CB($s0)
    ctx->pc = 0x295e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27083), (uint8_t)GPR_U32(ctx, 3));
    // 0x295ea0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x295ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295ea4: 0xa20369cc  sb          $v1, 0x69CC($s0)
    ctx->pc = 0x295ea4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27084), (uint8_t)GPR_U32(ctx, 3));
    // 0x295ea8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x295ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295eac: 0xa20369d0  sb          $v1, 0x69D0($s0)
    ctx->pc = 0x295eacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27088), (uint8_t)GPR_U32(ctx, 3));
    // 0x295eb0: 0x2403001a  addiu       $v1, $zero, 0x1A
    ctx->pc = 0x295eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x295eb4: 0xae0369d4  sw          $v1, 0x69D4($s0)
    ctx->pc = 0x295eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27092), GPR_U32(ctx, 3));
    // 0x295eb8: 0x2403001a  addiu       $v1, $zero, 0x1A
    ctx->pc = 0x295eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x295ebc: 0xae0369d8  sw          $v1, 0x69D8($s0)
    ctx->pc = 0x295ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27096), GPR_U32(ctx, 3));
    // 0x295ec0: 0x920369ca  lbu         $v1, 0x69CA($s0)
    ctx->pc = 0x295ec0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 27082)));
    // 0x295ec4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x295ec4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x295ec8: 0x8e0369d4  lw          $v1, 0x69D4($s0)
    ctx->pc = 0x295ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27092)));
    // 0x295ecc: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x295eccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x295ed0: 0x24030280  addiu       $v1, $zero, 0x280
    ctx->pc = 0x295ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x295ed4: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x295ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x295ed8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x295ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x295edc: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x295edcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x295ee0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x295ee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x295ee4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x295ee4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x295ee8: 0xa60369a8  sh          $v1, 0x69A8($s0)
    ctx->pc = 0x295ee8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 27048), (uint16_t)GPR_U32(ctx, 3));
    // 0x295eec: 0x920369cb  lbu         $v1, 0x69CB($s0)
    ctx->pc = 0x295eecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 27083)));
    // 0x295ef0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x295ef0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x295ef4: 0x8e0369d8  lw          $v1, 0x69D8($s0)
    ctx->pc = 0x295ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27096)));
    // 0x295ef8: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x295ef8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x295efc: 0x24030197  addiu       $v1, $zero, 0x197
    ctx->pc = 0x295efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 407));
    // 0x295f00: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x295f00u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x295f04: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x295f04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x295f08: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x295f08u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x295f0c: 0xa60369aa  sh          $v1, 0x69AA($s0)
    ctx->pc = 0x295f0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 27050), (uint16_t)GPR_U32(ctx, 3));
    // 0x295f10: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x295F10u;
    {
        const bool branch_taken_0x295f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x295f10) {
            ctx->pc = 0x296024u;
            return;
        }
    }
    ctx->pc = 0x295F18u;
}
