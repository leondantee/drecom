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

// Function: entry_0032a020
// Address: 0x32a020 - 0x32a084
void entry_0032a020_0x32a020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032a020_0x32a020");
#endif

    ctx->pc = 0x32a020u;

    // 0x32a020: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x32a020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x32a024: 0x2473a3d8  addiu       $s3, $v1, -0x5C28
    ctx->pc = 0x32a024u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943704));
    // 0x32a028: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x32a028u;
    { uint32_t bits = FAST_READ32(0x39A3DCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32a02c: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x32a02cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x32a030: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32a030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32a034: 0xe4601820  swc1        $f0, 0x1820($v1)
    ctx->pc = 0x32a034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6176), bits); }
    // 0x32a038: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x32a038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32a03c: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x32a03cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x32a040: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32a040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32a044: 0xe4601824  swc1        $f0, 0x1824($v1)
    ctx->pc = 0x32a044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6180), bits); }
    // 0x32a048: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x32a048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32a04c: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x32a04cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x32a050: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32a050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32a054: 0xe4601828  swc1        $f0, 0x1828($v1)
    ctx->pc = 0x32a054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6184), bits); }
    // 0x32a058: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x32a058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32a05c: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x32a05cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x32a060: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32a060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32a064: 0xe460182c  swc1        $f0, 0x182C($v1)
    ctx->pc = 0x32a064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6188), bits); }
    // 0x32a068: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32a068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32a06c: 0x12230010  beq         $s1, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x32A06Cu;
    {
        const bool branch_taken_0x32a06c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x32a06c) {
            ctx->pc = 0x32A0B0u;
            return;
        }
    }
    ctx->pc = 0x32A074u;
    // 0x32a074: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32A074u;
    {
        const bool branch_taken_0x32a074 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a074) {
            ctx->pc = 0x32A084u;
            return;
        }
    }
    ctx->pc = 0x32A07Cu;
    // 0x32a07c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x32A07Cu;
    {
        const bool branch_taken_0x32a07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a07c) {
            ctx->pc = 0x32A0E8u;
            return;
        }
    }
    ctx->pc = 0x32A084u;
}
