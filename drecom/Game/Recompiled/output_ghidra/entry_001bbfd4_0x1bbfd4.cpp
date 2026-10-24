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

// Function: entry_001bbfd4
// Address: 0x1bbfd4 - 0x1bc058
void entry_001bbfd4_0x1bbfd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bbfd4_0x1bbfd4");
#endif

    ctx->pc = 0x1bbfd4u;

    // 0x1bbfd4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bbfd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bbfd8: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x1bbfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1bbfdc: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x1bbfdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x1bbfe0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bbfe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bbfe4: 0xac231a64  sw          $v1, 0x1A64($at)
    ctx->pc = 0x1bbfe4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
    // 0x1bbfe8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bbfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bbfec: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1bbfecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1bbff0: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x1bbff0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
    // 0x1bbff4: 0x451825  or          $v1, $v0, $a1
    ctx->pc = 0x1bbff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1bbff8: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1bbff8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1bbffc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bbffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc000: 0x908509db  lbu         $a1, 0x9DB($a0)
    ctx->pc = 0x1bc000u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2523)));
    // 0x1bc004: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x1bc004u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1bc008: 0x30830010  andi        $v1, $a0, 0x10
    ctx->pc = 0x1bc008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x1bc00c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1BC00Cu;
    {
        const bool branch_taken_0x1bc00c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc00c) {
            ctx->pc = 0x1BC058u;
            return;
        }
    }
    ctx->pc = 0x1BC014u;
    // 0x1bc014: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x1bc014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x1bc018: 0x30640020  andi        $a0, $v1, 0x20
    ctx->pc = 0x1bc018u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1bc01c: 0x1480000e  bnez        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x1BC01Cu;
    {
        const bool branch_taken_0x1bc01c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc01c) {
            ctx->pc = 0x1BC058u;
            return;
        }
    }
    ctx->pc = 0x1BC024u;
    // 0x1bc024: 0x3c0342ac  lui         $v1, 0x42AC
    ctx->pc = 0x1bc024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17068 << 16));
    // 0x1bc028: 0x3463cccc  ori         $v1, $v1, 0xCCCC
    ctx->pc = 0x1bc028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52428);
    // 0x1bc02c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bc02cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc030: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bc030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc034: 0xe4801284  swc1        $f0, 0x1284($a0)
    ctx->pc = 0x1bc034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4740), bits); }
    // 0x1bc038: 0x3c0340ac  lui         $v1, 0x40AC
    ctx->pc = 0x1bc038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16556 << 16));
    // 0x1bc03c: 0x3463cccc  ori         $v1, $v1, 0xCCCC
    ctx->pc = 0x1bc03cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52428);
    // 0x1bc040: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bc040u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc044: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc048: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x1bc048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
    // 0x1bc04c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bc04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc050: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc054: 0xac641b64  sw          $a0, 0x1B64($v1)
    ctx->pc = 0x1bc054u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7012), GPR_U32(ctx, 4));
    ctx->pc = 0x1bc058u;
}
