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

// Function: entry_0032a9fc
// Address: 0x32a9fc - 0x32aa60
void entry_0032a9fc_0x32a9fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032a9fc_0x32a9fc");
#endif

    ctx->pc = 0x32a9fcu;

    // 0x32a9fc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32a9fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32aa00: 0x942300c8  lhu         $v1, 0xC8($at)
    ctx->pc = 0x32aa00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x32aa04: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x32aa04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32aa08: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x32aa08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x32aa0c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x32AA0Cu;
    {
        const bool branch_taken_0x32aa0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32aa0c) {
            ctx->pc = 0x32AA60u;
            return;
        }
    }
    ctx->pc = 0x32AA14u;
    // 0x32aa14: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32aa14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32aa18: 0x942300dc  lhu         $v1, 0xDC($at)
    ctx->pc = 0x32aa18u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00DCu));
    // 0x32aa1c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x32aa1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32aa20: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x32aa20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x32aa24: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x32AA24u;
    {
        const bool branch_taken_0x32aa24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32aa24) {
            ctx->pc = 0x32AA60u;
            return;
        }
    }
    ctx->pc = 0x32AA2Cu;
    // 0x32aa2c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32aa2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32aa30: 0x8c23a224  lw          $v1, -0x5DDC($at)
    ctx->pc = 0x32aa30u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x39A224u));
    // 0x32aa34: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32aa34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32aa38: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32aa38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32aa3c: 0xac23a224  sw          $v1, -0x5DDC($at)
    ctx->pc = 0x32aa3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x39A224u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x39A224u, _value); } while (0);
    // 0x32aa40: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32aa40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32aa44: 0x8c23a224  lw          $v1, -0x5DDC($at)
    ctx->pc = 0x32aa44u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x39A224u));
    // 0x32aa48: 0x28610081  slti        $at, $v1, 0x81
    ctx->pc = 0x32aa48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x32aa4c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x32AA4Cu;
    {
        const bool branch_taken_0x32aa4c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x32aa4c) {
            ctx->pc = 0x32AA60u;
            return;
        }
    }
    ctx->pc = 0x32AA54u;
    // 0x32aa54: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x32aa54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32aa58: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32aa58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32aa5c: 0xac23a224  sw          $v1, -0x5DDC($at)
    ctx->pc = 0x32aa5cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x39A224u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x39A224u, _value); } while (0);
    ctx->pc = 0x32aa60u;
}
