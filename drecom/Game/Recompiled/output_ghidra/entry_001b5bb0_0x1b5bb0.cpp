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

// Function: entry_001b5bb0
// Address: 0x1b5bb0 - 0x1b5c04
void entry_001b5bb0_0x1b5bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5bb0_0x1b5bb0");
#endif

    ctx->pc = 0x1b5bb0u;

    // 0x1b5bb0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b5bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5bb4: 0x908309db  lbu         $v1, 0x9DB($a0)
    ctx->pc = 0x1b5bb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2523)));
    // 0x1b5bb8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1b5bb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b5bbc: 0x30850010  andi        $a1, $a0, 0x10
    ctx->pc = 0x1b5bbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x1b5bc0: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B5BC0u;
    {
        const bool branch_taken_0x1b5bc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5bc0) {
            ctx->pc = 0x1B5C04u;
            return;
        }
    }
    ctx->pc = 0x1B5BC8u;
    // 0x1b5bc8: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x1b5bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x1b5bcc: 0x30640020  andi        $a0, $v1, 0x20
    ctx->pc = 0x1b5bccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1b5bd0: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B5BD0u;
    {
        const bool branch_taken_0x1b5bd0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5bd0) {
            ctx->pc = 0x1B5C04u;
            return;
        }
    }
    ctx->pc = 0x1B5BD8u;
    // 0x1b5bd8: 0x3c03424c  lui         $v1, 0x424C
    ctx->pc = 0x1b5bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16972 << 16));
    // 0x1b5bdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b5bdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5be0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b5be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5be4: 0xe4601284  swc1        $f0, 0x1284($v1)
    ctx->pc = 0x1b5be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4740), bits); }
    // 0x1b5be8: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x1b5be8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x1b5bec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b5becu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5bf0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b5bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5bf4: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x1b5bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
    // 0x1b5bf8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b5bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b5bfc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b5bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5c00: 0xac641b64  sw          $a0, 0x1B64($v1)
    ctx->pc = 0x1b5c00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7012), GPR_U32(ctx, 4));
    ctx->pc = 0x1b5c04u;
}
