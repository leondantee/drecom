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

// Function: entry_00295f4c
// Address: 0x295f4c - 0x296004
void entry_00295f4c_0x295f4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00295f4c_0x295f4c");
#endif

    ctx->pc = 0x295f4cu;

    // 0x295f4c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x295f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x295f50: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x295f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x295f54: 0xae0369b0  sw          $v1, 0x69B0($s0)
    ctx->pc = 0x295f54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27056), GPR_U32(ctx, 3));
    // 0x295f58: 0x8e0369b0  lw          $v1, 0x69B0($s0)
    ctx->pc = 0x295f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27056)));
    // 0x295f5c: 0xae0369b4  sw          $v1, 0x69B4($s0)
    ctx->pc = 0x295f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27060), GPR_U32(ctx, 3));
    // 0x295f60: 0x3c030081  lui         $v1, 0x81
    ctx->pc = 0x295f60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)129 << 16));
    // 0x295f64: 0x2463ca10  addiu       $v1, $v1, -0x35F0
    ctx->pc = 0x295f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953488));
    // 0x295f68: 0xae0369bc  sw          $v1, 0x69BC($s0)
    ctx->pc = 0x295f68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27068), GPR_U32(ctx, 3));
    // 0x295f6c: 0x8e0369bc  lw          $v1, 0x69BC($s0)
    ctx->pc = 0x295f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27068)));
    // 0x295f70: 0xae0369c0  sw          $v1, 0x69C0($s0)
    ctx->pc = 0x295f70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27072), GPR_U32(ctx, 3));
    // 0x295f74: 0xae00699c  sw          $zero, 0x699C($s0)
    ctx->pc = 0x295f74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27036), GPR_U32(ctx, 0));
    // 0x295f78: 0xa20069c9  sb          $zero, 0x69C9($s0)
    ctx->pc = 0x295f78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27081), (uint8_t)GPR_U32(ctx, 0));
    // 0x295f7c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x295f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x295f80: 0xa20369ca  sb          $v1, 0x69CA($s0)
    ctx->pc = 0x295f80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27082), (uint8_t)GPR_U32(ctx, 3));
    // 0x295f84: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x295f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x295f88: 0xa20369cb  sb          $v1, 0x69CB($s0)
    ctx->pc = 0x295f88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27083), (uint8_t)GPR_U32(ctx, 3));
    // 0x295f8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x295f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295f90: 0xa20369cc  sb          $v1, 0x69CC($s0)
    ctx->pc = 0x295f90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27084), (uint8_t)GPR_U32(ctx, 3));
    // 0x295f94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x295f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295f98: 0xa20369d0  sb          $v1, 0x69D0($s0)
    ctx->pc = 0x295f98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27088), (uint8_t)GPR_U32(ctx, 3));
    // 0x295f9c: 0x2403001a  addiu       $v1, $zero, 0x1A
    ctx->pc = 0x295f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x295fa0: 0xae0369d4  sw          $v1, 0x69D4($s0)
    ctx->pc = 0x295fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27092), GPR_U32(ctx, 3));
    // 0x295fa4: 0x2403001a  addiu       $v1, $zero, 0x1A
    ctx->pc = 0x295fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x295fa8: 0xae0369d8  sw          $v1, 0x69D8($s0)
    ctx->pc = 0x295fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27096), GPR_U32(ctx, 3));
    // 0x295fac: 0x920369ca  lbu         $v1, 0x69CA($s0)
    ctx->pc = 0x295facu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 27082)));
    // 0x295fb0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x295fb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x295fb4: 0x8e0369d4  lw          $v1, 0x69D4($s0)
    ctx->pc = 0x295fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27092)));
    // 0x295fb8: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x295fb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x295fbc: 0x24030280  addiu       $v1, $zero, 0x280
    ctx->pc = 0x295fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x295fc0: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x295fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x295fc4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x295fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x295fc8: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x295fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x295fcc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x295fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x295fd0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x295fd0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x295fd4: 0xa60369a8  sh          $v1, 0x69A8($s0)
    ctx->pc = 0x295fd4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 27048), (uint16_t)GPR_U32(ctx, 3));
    // 0x295fd8: 0x920369cb  lbu         $v1, 0x69CB($s0)
    ctx->pc = 0x295fd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 27083)));
    // 0x295fdc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x295fdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x295fe0: 0x8e0369d8  lw          $v1, 0x69D8($s0)
    ctx->pc = 0x295fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27096)));
    // 0x295fe4: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x295fe4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x295fe8: 0x24030197  addiu       $v1, $zero, 0x197
    ctx->pc = 0x295fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 407));
    // 0x295fec: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x295fecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x295ff0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x295ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x295ff4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x295ff4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x295ff8: 0xa60369aa  sh          $v1, 0x69AA($s0)
    ctx->pc = 0x295ff8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 27050), (uint16_t)GPR_U32(ctx, 3));
    // 0x295ffc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x295FFCu;
    {
        const bool branch_taken_0x295ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x295ffc) {
            ctx->pc = 0x296024u;
            return;
        }
    }
    ctx->pc = 0x296004u;
}
