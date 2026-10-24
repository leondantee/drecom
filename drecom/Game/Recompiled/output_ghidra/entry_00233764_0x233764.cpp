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

// Function: entry_00233764
// Address: 0x233764 - 0x2337ec
void entry_00233764_0x233764(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00233764_0x233764");
#endif

    ctx->pc = 0x233764u;

    // 0x233764: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x233764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x233768: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x233768u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x23376c: 0x1060007d  beqz        $v1, . + 4 + (0x7D << 2)
    ctx->pc = 0x23376Cu;
    {
        const bool branch_taken_0x23376c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23376c) {
            ctx->pc = 0x233964u;
            return;
        }
    }
    ctx->pc = 0x233774u;
    // 0x233774: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x233774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233778: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x233778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x23377c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x23377cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x233780: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x233780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x233784: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x233784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x233788: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x233788u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x23378c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x23378cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x233790: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x233790u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x233794: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x233794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x233798: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x233798u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x23379c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x23379cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2337a0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x2337a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2337a4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2337a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x2337a8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x2337a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2337ac: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x2337acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x2337b0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2337b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2337b4: 0x26850150  addiu       $a1, $s4, 0x150
    ctx->pc = 0x2337b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 336));
    // 0x2337b8: 0xa0a4001d  sb          $a0, 0x1D($a1)
    ctx->pc = 0x2337b8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 29), (uint8_t)GPR_U32(ctx, 4));
    // 0x2337bc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x2337bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2337c0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2337c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2337c4: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x2337c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x2337c8: 0x2464ec70  addiu       $a0, $v1, -0x1390
    ctx->pc = 0x2337c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962288));
    // 0x2337cc: 0x70809628  paddub      $s2, $a0, $zero
    ctx->pc = 0x2337ccu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2337d0: 0x3c05437a  lui         $a1, 0x437A
    ctx->pc = 0x2337d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17274 << 16));
    // 0x2337d4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2337d4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2337d8: 0x0  nop
    ctx->pc = 0x2337d8u;
    // NOP
    // 0x2337dc: 0xe64000d0  swc1        $f0, 0xD0($s2)
    ctx->pc = 0x2337dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 208), bits); }
    // 0x2337e0: 0xe64000d4  swc1        $f0, 0xD4($s2)
    ctx->pc = 0x2337e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 212), bits); }
    // 0x2337e4: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x2337E4u;
    {
        const bool branch_taken_0x2337e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2337e4) {
            ctx->pc = 0x233964u;
            return;
        }
    }
    ctx->pc = 0x2337ECu;
}
