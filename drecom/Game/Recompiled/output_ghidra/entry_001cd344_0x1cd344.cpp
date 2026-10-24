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

// Function: entry_001cd344
// Address: 0x1cd344 - 0x1cd398
void entry_001cd344_0x1cd344(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd344_0x1cd344");
#endif

    ctx->pc = 0x1cd344u;

    // 0x1cd344: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cd344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd348: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd34c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1cd34cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cd350: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1cd350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1cd354: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd358: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1cd358u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cd35c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd35cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd360: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1cd360u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cd364: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd368: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1cd368u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cd36c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd370: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1cd370u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1cd374: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1cd374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cd378: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd37c: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1cd37cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cd380: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd384: 0xc48000d4  lwc1        $f0, 0xD4($a0)
    ctx->pc = 0x1cd384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd388: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd38c: 0xe4601290  swc1        $f0, 0x1290($v1)
    ctx->pc = 0x1cd38cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4752), bits); }
    // 0x1cd390: 0x100001f7  b           . + 4 + (0x1F7 << 2)
    ctx->pc = 0x1CD390u;
    {
        const bool branch_taken_0x1cd390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd390) {
            ctx->pc = 0x1CDB70u;
            return;
        }
    }
    ctx->pc = 0x1CD398u;
}
