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

// Function: entry_001547bc
// Address: 0x1547bc - 0x154850
void entry_001547bc_0x1547bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001547bc_0x1547bc");
#endif

    ctx->pc = 0x1547bcu;

    // 0x1547bc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1547bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1547c0: 0x8c229370  lw          $v0, -0x6C90($at)
    ctx->pc = 0x1547c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3E9370u));
    // 0x1547c4: 0xae0215c0  sw          $v0, 0x15C0($s0)
    ctx->pc = 0x1547c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5568), GPR_U32(ctx, 2));
    // 0x1547c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1547c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1547cc: 0x0  nop
    ctx->pc = 0x1547ccu;
    // NOP
    // 0x1547d0: 0xe60015d0  swc1        $f0, 0x15D0($s0)
    ctx->pc = 0x1547d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5584), bits); }
    // 0x1547d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1547d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1547d8: 0x0  nop
    ctx->pc = 0x1547d8u;
    // NOP
    // 0x1547dc: 0xe60015d4  swc1        $f0, 0x15D4($s0)
    ctx->pc = 0x1547dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5588), bits); }
    // 0x1547e0: 0x3c044416  lui         $a0, 0x4416
    ctx->pc = 0x1547e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17430 << 16));
    // 0x1547e4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1547e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1547e8: 0x0  nop
    ctx->pc = 0x1547e8u;
    // NOP
    // 0x1547ec: 0xe60015d8  swc1        $f0, 0x15D8($s0)
    ctx->pc = 0x1547ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5592), bits); }
    // 0x1547f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1547f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1547f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1547f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1547f8: 0x0  nop
    ctx->pc = 0x1547f8u;
    // NOP
    // 0x1547fc: 0xe60015dc  swc1        $f0, 0x15DC($s0)
    ctx->pc = 0x1547fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5596), bits); }
    // 0x154800: 0xa200157d  sb          $zero, 0x157D($s0)
    ctx->pc = 0x154800u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5501), (uint8_t)GPR_U32(ctx, 0));
    // 0x154804: 0x3c054516  lui         $a1, 0x4516
    ctx->pc = 0x154804u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17686 << 16));
    // 0x154808: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x154808u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15480c: 0x0  nop
    ctx->pc = 0x15480cu;
    // NOP
    // 0x154810: 0xe60015b8  swc1        $f0, 0x15B8($s0)
    ctx->pc = 0x154810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5560), bits); }
    // 0x154814: 0x920313a6  lbu         $v1, 0x13A6($s0)
    ctx->pc = 0x154814u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5030)));
    // 0x154818: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x154818u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15481c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x15481cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x154820: 0x10a40089  beq         $a1, $a0, . + 4 + (0x89 << 2)
    ctx->pc = 0x154820u;
    {
        const bool branch_taken_0x154820 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x154820) {
            ctx->pc = 0x154A48u;
            return;
        }
    }
    ctx->pc = 0x154828u;
    // 0x154828: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x154828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15482c: 0x10a30086  beq         $a1, $v1, . + 4 + (0x86 << 2)
    ctx->pc = 0x15482Cu;
    {
        const bool branch_taken_0x15482c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x15482c) {
            ctx->pc = 0x154A48u;
            return;
        }
    }
    ctx->pc = 0x154834u;
    // 0x154834: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x154834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x154838: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x154838u;
    {
        const bool branch_taken_0x154838 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x154838) {
            ctx->pc = 0x154850u;
            return;
        }
    }
    ctx->pc = 0x154840u;
    // 0x154840: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x154840u;
    {
        const bool branch_taken_0x154840 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x154840) {
            ctx->pc = 0x154850u;
            return;
        }
    }
    ctx->pc = 0x154848u;
    // 0x154848: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x154848u;
    {
        const bool branch_taken_0x154848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154848) {
            ctx->pc = 0x154C38u;
            return;
        }
    }
    ctx->pc = 0x154850u;
}
