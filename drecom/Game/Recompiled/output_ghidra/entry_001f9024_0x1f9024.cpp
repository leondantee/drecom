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

// Function: entry_001f9024
// Address: 0x1f9024 - 0x1f9098
void entry_001f9024_0x1f9024(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9024_0x1f9024");
#endif

    ctx->pc = 0x1f9024u;

    // 0x1f9024: 0x3c033dc9  lui         $v1, 0x3DC9
    ctx->pc = 0x1f9024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15817 << 16));
    // 0x1f9028: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1f9028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1f902c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f902cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9030: 0x0  nop
    ctx->pc = 0x1f9030u;
    // NOP
    // 0x1f9034: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x1f9034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x1f9038: 0x3c033d49  lui         $v1, 0x3D49
    ctx->pc = 0x1f9038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15689 << 16));
    // 0x1f903c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1f903cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1f9040: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f9040u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9044: 0x0  nop
    ctx->pc = 0x1f9044u;
    // NOP
    // 0x1f9048: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x1f9048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x1f904c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x1f904cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f9050: 0x90630029  lbu         $v1, 0x29($v1)
    ctx->pc = 0x1f9050u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 41)));
    // 0x1f9054: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1f9054u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f9058: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1f9058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f905c: 0x108301cb  beq         $a0, $v1, . + 4 + (0x1CB << 2)
    ctx->pc = 0x1F905Cu;
    {
        const bool branch_taken_0x1f905c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f905c) {
            ctx->pc = 0x1F978Cu;
            return;
        }
    }
    ctx->pc = 0x1F9064u;
    // 0x1f9064: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1f9064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f9068: 0x108301aa  beq         $a0, $v1, . + 4 + (0x1AA << 2)
    ctx->pc = 0x1F9068u;
    {
        const bool branch_taken_0x1f9068 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f9068) {
            ctx->pc = 0x1F9714u;
            return;
        }
    }
    ctx->pc = 0x1F9070u;
    // 0x1f9070: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f9070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f9074: 0x1083014a  beq         $a0, $v1, . + 4 + (0x14A << 2)
    ctx->pc = 0x1F9074u;
    {
        const bool branch_taken_0x1f9074 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f9074) {
            ctx->pc = 0x1F95A0u;
            return;
        }
    }
    ctx->pc = 0x1F907Cu;
    // 0x1f907c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f907cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f9080: 0x10830034  beq         $a0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x1F9080u;
    {
        const bool branch_taken_0x1f9080 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f9080) {
            ctx->pc = 0x1F9154u;
            return;
        }
    }
    ctx->pc = 0x1F9088u;
    // 0x1f9088: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F9088u;
    {
        const bool branch_taken_0x1f9088 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9088) {
            ctx->pc = 0x1F9098u;
            return;
        }
    }
    ctx->pc = 0x1F9090u;
    // 0x1f9090: 0x100001be  b           . + 4 + (0x1BE << 2)
    ctx->pc = 0x1F9090u;
    {
        const bool branch_taken_0x1f9090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9090) {
            ctx->pc = 0x1F978Cu;
            return;
        }
    }
    ctx->pc = 0x1F9098u;
}
